#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;
	int M;
	cin >> M;
	int X[M],T;
	int sequence= (N+1)*N/2;

	for (int i = 0; i < M; ++i) {
		//cin >> X[i];
		cin >> T;
		sequence -= T;
	}
	cout << sequence << endl;
	return 0;
}