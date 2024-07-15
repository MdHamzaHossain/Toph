#include <bits/stdc++.h>

using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		int N;
		cin >> N;
		int A[N];
		int shortest = 1001;
		int tallest = -1;
		for (int j = 0; j < N; ++j) {
			cin >> A[j];
			if(A[j] > tallest ) tallest = A[j];
			if(A[j] < shortest) shortest=A[j];
		}
		
		cout << (tallest - shortest) << endl;
		
	}
	
	return 0;
}