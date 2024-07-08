#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
  
    cin >> N;
    if(N==0) {cout << 0 << endl; return 0;}
    if(N>=20) {cout << "0000" << endl; return 0;}
    int m = N;
    int fact = N;
    for (int i = 1; i < N; i++){
        fact *= i;
        fact %= 10000;
    };
    string s = to_string(fact);
    string r = fact >999 ? s.substr(s.size()-4,4):s;
    cout << r<<endl;
    return 0;
}