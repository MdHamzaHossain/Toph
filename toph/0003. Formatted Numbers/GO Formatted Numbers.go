package main

import "fmt"

func main() {
	var S string;
	fmt.Scanf("%s", &S);
	var i int = len(S);
	i2 := 0;
	var result string = ""; 
	for i != 0 {
		i--;
		if i2%3 == 0 && i2 != 0 {
						result = "," + result;

		}
	    result = string(S[i]) + result;
	    i2++;
	}
	fmt.Printf("%s", result);
	
}