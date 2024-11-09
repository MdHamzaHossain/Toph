#define ll              long long
#define ull             unsigned long long
#define ulli             unsigned long long int
#define b2e(a)          a.begin(),a.end()
#define e2b(a)          a.rbegin(),a.rend()
#define forI(i,a,b)      for(int i=a;i<=b;i++)
#define rforI(i,a,b)      for(int i=a;i>=b;i--)
#define forN(i,b)        for(int i=0;i<b;i++)
#define rforN(i,a,b)      for(int i=a;i>b;i--)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    forI(tC, 1,t){
        int a1,b1,a2,b2,a3,b3;
        cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
        int maxM= max(max (b1,b2), b3);
        int minM= min(min (a1,a2), a3);
        int hours=0;
        forI(i, minM, maxM) {
            if(a1 <= i && i <= b1) hours++;
            else if (a2 <= i && i <= b2) hours++;
            else if (a3 <= i && i <= b3) hours++;
        };
        cout << hours << endl;
    }

}