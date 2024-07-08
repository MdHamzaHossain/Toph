n=+(r=readline)()
console.log(r().split("").map((a) => ((b="ABCDEFGHIJKLMNOPQRSTUVWXYZ".toLowerCase()), c=b.indexOf(a), c>-1? b.at(c-n) : a)).join(""))