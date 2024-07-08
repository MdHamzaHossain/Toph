#include <iostream>
using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	double angle;
	angle = (60*(double)H - 11*(double)M)/2;
	if(angle > 180) angle = 360.000 - angle;
	printf("%lf", angle);
	return 0;

}