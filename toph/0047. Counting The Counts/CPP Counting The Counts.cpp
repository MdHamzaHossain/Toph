#include <iostream>

using namespace std;

int main() {
	int N,count=0;
	cin >> N;
	while(N--){
		int T;
		cin >> T;
		if(T>=80) count++;
	}
	cout << count << endl;
	return 0;
}