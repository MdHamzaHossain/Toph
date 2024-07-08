#include <bits/stdc++.h>
using namespace std;

int main() {
    int b,c;
    cin >> b >> c;
    cout << (b > c ? (b-c) : (b-c%b)) << endl;

}