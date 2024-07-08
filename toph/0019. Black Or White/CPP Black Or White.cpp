#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string a,b;
    cin >> a >> b;
    int x, y;
    x= (a.back());
    y= (b.back());
    cout << (((x % 2 ==0 && y%2 == 0) || (x % 2 ==1 && y%2 == 1)) ? "Black": "White") << endl;
    return 0;
}