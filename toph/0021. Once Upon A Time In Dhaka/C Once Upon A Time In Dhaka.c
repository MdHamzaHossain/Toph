#include<stdio.h>
int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; ++i) {
		float W, G;
		scanf("%f %f", &W, &G);

		printf("%.4f\n", (W/2 - G/2));


	}

	return 0;
}