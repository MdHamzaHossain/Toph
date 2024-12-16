#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,c;
	cin >> n;
	cin >> a >> b >> c;
	cout << ((n-min(a,min(b,c)) >=10)?"Yes :-D": "No :-(")<< endl;
}