#include <bits/stdc++.h>
using namespace std;

int main() {
		string S;
	cin >> S;
	string noCap="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cC=0, sC=0;
	for(auto c :S){
		int t = noCap.find(c);
		if(t > -1)  cC++;
		else if ((t=noCap.find(toupper(c))),t > -1 ) sC++; 
	}
	cout << cC << " " << sC << endl;
	return 0;
}