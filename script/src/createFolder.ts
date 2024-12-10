import * as fsp from "fs/promises";
import { join } from "path";
import readline from "node:readline/promises";
import { stdin as input, stdout as output } from "node:process";

const r1 = readline.createInterface({ input, output });
const pathToToph = join(process.cwd(), "../", "toph");
// The list of languages I use
let listOfExt = ["c", "cpp", "js", "golfjs", "py", "go", "kt", "java", "rs", "lua", "swift"];
main();
async function main() {
    // eslint-disable-next-line no-constant-condition
    while (true) {
        const url = await r1.question("Enter the toph url: \n");

        const title = url.split("/")?.pop() || "";
        if (!title) process.exit();
        const formattedTitle = formatTitleString(title);

        const titleAndIndexMatcherRegex = /(?<Index>\d+)\. (?<Title>.+)/;
        const readDir = await fsp.readdir(pathToToph);
        const foundDir = readDir.find((a) => {
            return formattedTitle === a.match(titleAndIndexMatcherRegex)?.groups?.Title;
        });

        if (foundDir) {
            console.log("You already have an entry with the same title. The missing language variants will be added");
            const pathToQuestion = join(pathToToph, foundDir);

            const files = await fsp.readdir(pathToQuestion);
            const existingExtensions = files.map((a) => a.split(".").pop());
            listOfExt = listOfExt.filter((a) => !existingExtensions.includes(a)).sort();
        }
        const matchedDir = (foundDir || readDir.at(-1))?.match(titleAndIndexMatcherRegex);
        const { Index } = matchedDir?.groups || {};
        const indexNum = +Index || 0;
        //const indexNum = a.at(-1)?.match(/(?<Index>\d+)\. (<Title>?.+)/)?.[0] || 0;
        const pathToQuestion = join(
            pathToToph,
            `${+indexNum + (foundDir ? 0 : 1)}`.padStart(4, "0") + ". " + formattedTitle,
        );

        await fsp.mkdir(`${pathToQuestion}`, { recursive: true });
        const comments = await r1.question("Add any additional comments: \n");
        const templateMD = await fsp.readFile((process.cwd(), "template.md"), { encoding: "utf-8" });

        const existingComments = (
            await fsp.readFile(join(pathToQuestion, "README.md"), { encoding: "utf-8" }).catch(() => "")
        )?.trim();
        const content =
            existingComments ||
            templateMD
                .replaceAll(/({{%formattedTitle}})/g, formattedTitle)
                .replaceAll(/({{%comments}})/g, comments)
                .replaceAll(/{{%title}}/g, title);

        await fsp.writeFile(join(pathToQuestion, "README.md"), content);

        const fileExtensions = (
            await r1.question(
                "In which language(s) did you solve this question?\n" +
                    listOfExt.sort().join(", ") +
                    "\nEnter a list of extensions separated by commas:\n",
            )
        )
            .split(",")
            .map((a) => a.trim().toLowerCase());
        await Promise.all(
            listOfExt.map((ext) => {
                if (fileExtensions.includes(ext)) {
                    return fsp.writeFile(
                        join(pathToQuestion, `${ext.toUpperCase()} ${formattedTitle}.${ext.replace("golfjs", "js")}`),
                        "",
                    );
                }
            }),
        );
        console.log("\n\n\n");
    }
}
function formatTitleString(str: string): string {
    return str[0].toUpperCase() + str.slice(1).replace(/-(?<T>.)/g, (v: string) => v.replace("-", " ").toUpperCase());
}
