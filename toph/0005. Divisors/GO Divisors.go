package main

import "fmt"
func main() {
	var A int;
	fmt.Scanf("%d", &A);
	for i:= 1; i <= A; i++ {
		if A%i==0 {
			fmt.Println(i)
		};
	}
	return;
}