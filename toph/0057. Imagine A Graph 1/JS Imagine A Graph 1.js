function isPrime(x){
	
	if(x==1) return false;
	if (x==2) return true;
	for (let i=2; i<=x/2;i++){
		if(x%i == 0) {return false}
	}
	return true;
}
function hasTwoPrimeDivisiblesOrIsPrime(x){
	if(isPrime(x)) return true;
	let primeivisibleCounter=0;
	for(let i = 2; i<x; i++){
		if(x%i==0 && isPrime(i)){
			let prime1, prime2;

			prime1= i;
			prime2=x/i;
			if(isPrime(prime2) && (prime1 !== prime2)) return true;
		}
	}
	return false;
}
function main(){

	[a,b] = readline().split(" ").map(e =>+e);
	if(a==b) return true;
	if(a<1 || b < 1) return false
	if(a ==1 || b==1 ) return false;

	return (hasTwoPrimeDivisiblesOrIsPrime(a) && hasTwoPrimeDivisiblesOrIsPrime(b)) ;
}
print( (main()) ? "Yes" :"No")