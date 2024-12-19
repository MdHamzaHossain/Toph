#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    cin >> S;
    int count =0;
    for(auto i: S){
        if(i == 'X') count++;
    }
    cout << count << endl;
    return 0;
}
