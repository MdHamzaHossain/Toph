import * as fsp from "fs/promises";
import { join } from "path";
import { markdownTable } from "markdown-table";
import FastGlob from "fast-glob";

main();
async function main() {
    const pathToToph = join(process.cwd(), "toph");
    // The list of languages I use
    let listOfExt = ["c", "cpp", "js", "py", "go", "kt", "java", "rs", "lua", "swift"].sort();
    const titleAndIndexMatcherRegex = /(?<Index>\d+)\. (?<Title>.+)/;

    let fileObj: { [index: string]: number } = {};
    listOfExt.forEach((a) => (fileObj[a] = 0));

    const mainFolders = await FastGlob("toph/**/**");
    const fileMapper = new Map<string, string[]>();

    let problemTrackerArray: string[][] = [
        ["Problem name", ...listOfExt],

        // ["Test", ...Array.from({length: listOfExt.length}, (e:undefined, i) => ""+i)],
        // ["Test", ...Array.from({length: listOfExt.length}, (e:undefined, i) => ""+i)]
    ];

    for (const folder of mainFolders) {
        const file = folder.split("/").at(-2) || "";
        const matchedDir = file.match(titleAndIndexMatcherRegex);
        const { Index, Title } = matchedDir?.groups || {};
        if (!Index || !Title) continue;
        //console.log(Index, Title);

        const fileExtension = folder.split(".").pop() || "";
        const extensionIndex = listOfExt.indexOf(fileExtension);
        if (extensionIndex < 0) continue;
        const url = formattedTitleToURL(Title);
        const hyperLinked = `[${file}](${url})`;
        let mapEntry =
            fileMapper.get(hyperLinked) ??
            fileMapper
                .set(
                    hyperLinked,
                    Array.from({ length: listOfExt.length }, (a: undefined) => ""),
                )
                .get(hyperLinked)!;

        mapEntry[extensionIndex] = `[${fileExtension}](<../${folder}>)`;
        fileObj[fileExtension]++;
    }
    for (const [name, ind] of fileMapper.entries()) {
        const resultArray: string[] = [name, ...ind.map((a) => a || "❎")];
        //console.log(resultArray);
        problemTrackerArray.push(resultArray);
        // ind.reduce((p,c,ind) => {
        //   if(!c) p.push("❎")
        // }, [])
    }

    const counterArray: string[][] = [["Language", "Solves"]];
    let totalCounter = 0;
    listOfExt.forEach((a, i) => {
        counterArray.push([a, "" + fileObj[a]]);
        totalCounter += fileObj[a];
    });
    counterArray.push(["Total", "" + totalCounter]);


    const completeString = 
      "### Amount of solves" + "\n\n" +
      markdownTable(counterArray) + "\n\n\n" 
      + "### Problems" + "\n\n" + markdownTable(
        problemTrackerArray.sort((a, b) => {
            //@ts-ignore
            return a[0] - b[0];
        }),
    )+ "\n";
    await fsp.writeFile(join(pathToToph, "README.md"), completeString);

    const oldReadMe = await fsp.readFile(join(pathToToph, "../README.md"), {"encoding": "utf-8"});
    const oldReadMeData = oldReadMe.split("## Stats")[0] || "";
    await fsp.writeFile(join(pathToToph, "../README.md"), oldReadMeData + "## Stats\n\n" + completeString);
}
function formattedTitleToURL(s: string): string {
    return "https://toph.co/p/" + s.toLowerCase().replace(/ /gim, "-");
}
