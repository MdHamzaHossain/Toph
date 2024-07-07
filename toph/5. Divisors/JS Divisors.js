// Array(a=(+readline())+1).fill(0).map((_,i) => a%i==0 ? console.log(i): undefined)
a= (+(readline()))
for(let i = 0; i <= a; i++){
	a%i==0?console.log(i):undefined
}