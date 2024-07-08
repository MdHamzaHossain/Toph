#include <iostream>
#include <string>
using namespace std;

int main() {
	int A;
	cin >> A;
	string s = to_string(A);
	int i = s.size();
	int i2 = 0;
	string result = "";
	while (i--){ 
	    if(i2%3 == 0 && i2 != 0) result= "," + result;
	    result = (s[i]) + result;
	    i2++;
	}
	cout << result << endl;
	return 0;
}