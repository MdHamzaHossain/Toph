a=+(r=readline)();e=r().split(" ").reduce((a, b) => (a=="n"? "n": ((+a) > (+b) ? (console.log("No"), "n") : b))) 
if(e!="n") console.log("Yes")