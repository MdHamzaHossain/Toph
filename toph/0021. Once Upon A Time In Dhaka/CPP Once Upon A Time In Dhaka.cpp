#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		float W, G;
		cin >> W;
		cin >> G;
		printf("%.4f", (W/2 - G/2));
		cout << endl;

	}

	return 0;
}