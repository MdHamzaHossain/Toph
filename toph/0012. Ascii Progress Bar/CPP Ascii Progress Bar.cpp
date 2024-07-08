#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    double n;
    cin >> n;
    int r = floor (n/10);
    string pro = "";
    for(int i=1; i < 11; i++ ){
        pro += (i <=r) ? "+" : "." ;
    }
    cout << "[" << pro << "] " << floor(n) << "%" << endl;
    return 0;
}