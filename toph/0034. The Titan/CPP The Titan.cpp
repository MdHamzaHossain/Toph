#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
    cin >> N;
    int sum =0;
    N++;
    while(N--){
       sum+= N*N;
    }
    cout << sum << endl;
}