#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int f1 = 0, f2 = 1;
	if(N == 1) {
		cout << 0 << endl;
		return 0;
	}
	if( N == 2) {
		cout << 1 << endl;
		return 0;
	}
	// initialize the next term (3rd term)
	int nextTerm = f1 + f2;

	// print 3rd to nth terms
	int i;
	for (i = 3; i <= N; ++i)
	{
		f1 = f2;
		f2 = nextTerm;
		nextTerm = f1 + f2;
	}
	cout << nextTerm << endl;
}