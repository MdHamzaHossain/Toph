#include <bits/stdc++.h>

using namespace std;

int main() {
    int y;
    cin >> y;
    string res = (((y%4==0) && (y%100!=0)) || (y%400 == 0) )? "Yes" : "No";
    cout << res << endl;

    return 0;
}