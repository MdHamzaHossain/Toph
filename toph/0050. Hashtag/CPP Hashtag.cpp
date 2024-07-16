#include <iostream>

using namespace std;

int main() {
	string S,R="#";
	getline(cin, S);
	for(auto C:S)
		if(C != ' ' && C != '#')R+=C;
	cout << R <<  endl;
	return 0;
}