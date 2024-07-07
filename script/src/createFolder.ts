import * as fsp from "fs/promises";
import { join } from "path";
import readline from "node:readline/promises";
import { stdin as input, stdout as output } from "node:process";

const r1 = readline.createInterface({ input, output });
const pathToToph = join(process.cwd(), "../", "toph");
main();
async function main() {
    // eslint-disable-next-line no-constant-condition
    while (true) {
        const url = await r1.question("Enter the toph url: \n");

        const title = url.split("/")?.pop() || "";
        if (!title) process.exit();
        const formattedTitle = formatTitleString(title);

        const comments = await r1.question("Add any additional comments: \n");
        const pathToQuestion = join(pathToToph, formattedTitle);
        await fsp.mkdir(pathToQuestion, { recursive: true });

        const templateMD = await fsp.readFile((process.cwd(), "template.md"), { encoding: "utf-8" });
        const content = templateMD
            .replaceAll(/({{%formattedTitle}})/g, formattedTitle)
            .replaceAll(/({{%comments}})/g, comments)
            .replaceAll(/{{%title}}/g, title);

        await fsp.writeFile(join(pathToQuestion, "README.md"), content);
        const listOfExt = ["c", "cpp", "js", "py", "go", "kt", "java"];
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
                    return fsp.writeFile(join(pathToQuestion, `${ext.toUpperCase()} ${formattedTitle}.${ext}`), "");
                }
            }),
        );
        console.log("\n\n\n");
    }
}
function formatTitleString(str: string): string {
    return str[0].toUpperCase() + str.slice(1).replace(/-(?<T>.)/g, (v: string) => v.replace("-", " ").toUpperCase());
}
