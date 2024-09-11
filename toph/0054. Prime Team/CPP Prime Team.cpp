#include<bits/stdc++.h>
using namespace std;
bool isPrimeHmz(int n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false; // Rule out every even number
    for (int i = 3; i*i <= n ; i += 2) // Starting from 3, only check the odd numbers
    {
        if (n % i == 0) return false;
    }
    return true;
}
int main(){
    int N;
    cin >> N;
	int T = N;
    int pS=0,nPS=0;
    while(N--){
        int t;
        cin >> t;
        isPrimeHmz(t)? pS++: nPS++;
    }
    cout << ( (pS > T/2)? (T/2) : pS) << endl;
}