#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
    int savedN=N;
	int i=2;
	string sArr[400];
    int index=0;
	while(N > 1){
		int divisiblePower = 0;
		while(N%i==0){
			N=N/i;
			divisiblePower++;
		}
		if(divisiblePower){
            string temp="";
            temp += to_string(i);
            temp += " ^ ";
            temp += to_string(divisiblePower);
            sArr[index++] = temp;
           // cout << temp << endl;
		}
        //cout << N << endl;
        i++;

	}
    cout << savedN;
    cout << " = ";
    for(int i2=0; i2<index; i2++){
        cout << sArr[i2];
        if(i2 <(index-1) ) cout << " * ";
    }
    cout << endl;
	return 0;
}