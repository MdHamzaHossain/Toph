#include<bits/stdc++.h>
using namespace std;
int main(){
	int A;
	cin >> A;
	int weTheOnes=0;
	while(A){
		if(A%2==1) weTheOnes++;
		A=A/2;
	}
	int result = 0;
	while(weTheOnes--){
		result += pow(2, weTheOnes);
	}
	cout << result << endl;
}