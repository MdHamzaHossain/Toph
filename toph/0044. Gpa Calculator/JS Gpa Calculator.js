a=+(r=readline)()
i=1;
while(a--){
	t=b=r();
	let sum=0;
	while(b--){
		sum+=+r();
	}
	print(`Case ${i}: ${(sum/t).toFixed(3)}`)
	i++;
}