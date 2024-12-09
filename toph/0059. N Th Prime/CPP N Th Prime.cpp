#define ll              long long
#define ull             unsigned long long
#define ulli             unsigned long long int
#define b2e(a)          a.begin(),a.end()
#define e2b(a)          a.rbegin(),a.rend()
#define forI(i,a,b)      for(int i=a;i<=b;i++)
#define rforI(i,a,b)      for(int i=a;i>=b;i--)
#define forN(i,b)        for(int i=0;i<b;i++)
#define rforN(i,a,b)      for(int i=a;i>b;i--)
#define nTimes(i,n)       for(int i=1; i<=n;i++)
#define testCase      int testCaseAmount,currentTestCase; cin>>testCaseAmount; for(currentTestCase=1; currentTestCase<=testCaseAmount; currentTestCase++)
#define caseCout(i)          cout << "Case " << currentTestCase << ": " << i << endl;
#include <bits/stdc++.h>
using namespace std;
const double PI = acos(-1.0);
const ll mod = 1e9 + 7;

int compareQ(const void* a, const void* b)
{
    int *x = (int*) a, *y = (int*)b;
    return (*x) -  (*y); // ascending
}
bool compD(int a, int b) {
    return a >= b; // descending
}
#define mx 7368789
vector<bool> prime(mx, true);
int primeNums[mx];

void sieve(int n)
{

    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int primeIndex = 0;
    for (int p = 2; p <= n; p++)
        if (prime[p])
            primeNums[primeIndex++] = p;
}

int main()
{
    sieve(mx);
    int n;
    cin >> n;
    cout << primeNums[n-1];

}