#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int friends=0;
    for(int i = 1; i < N; i++){
        if(N % i == 0) friends++;
    }
    cout << friends << endl;
    return 0;
}