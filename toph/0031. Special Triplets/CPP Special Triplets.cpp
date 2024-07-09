#include <bits/stdc++.h>

using namespace std;

int main() {
    int X;
    cin >> X;
    if(X%2==1){
        cout << X/2<< " " << X/2 << " " << 1 << endl;

    } else
        cout << (X/2)-1<< " " << (X/2)-1 << " " << 2 << endl;

    return 0;
}