package main

import "fmt"
func main() {
	var H, M float64;
	fmt.Scanf("%f %f", &H, &M)
	var angle float64;
	angle = (60*H - 11*M)/2;
	if angle > 180 {angle = 360.000 - angle;}
	fmt.Printf("%f", angle);
	return;
}