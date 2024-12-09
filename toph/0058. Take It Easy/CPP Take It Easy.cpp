
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

#define MOD 1000000007
inline void normal(ll &a) { if (abs(a)>=MOD) a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) {normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) {normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) {normal(a), normal(b); a -= b; normal(a);
    return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b);
        b = modMul(b, b);
        p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

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
ulli  modulo = 1000000007;
int main()
{
    ll n;
    cin >> n;
    ll a=1,
    b=modPow(n,n),
    c= 1,
    d= modAdd(modPow(2, n),  modPow(3, n));
    for(ulli i=2; i<=n; i++){
        a= modAdd((ll) a, (ll)i);
        c = modMul(c, i);
    }
    cout << a << " " << b << " " << c << " " << d;
}