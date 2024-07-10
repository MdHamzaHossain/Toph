#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    cin >> N;
    int closed = 0;
    for( auto a : N){
        if(closed == 0 && a == ')') {closed= -1;break;}
        if(a == '(') closed++;
        if(a == ')') closed--;

    }
    cout << (closed == 0 ?"Yes": "No" ) << endl;
}