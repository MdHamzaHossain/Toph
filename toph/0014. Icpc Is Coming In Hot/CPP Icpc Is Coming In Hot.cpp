#include <bits/stdc++.h>
using namespace std;

int main() {
    string n; int biggest=1,t=0, most=0;
    cin >> n;
    array<int, 10> counts;
    counts.fill(0);
    int i=0;
    for ( auto c : n ) {
        string cs(1, c);
        if(i == 0 ) {most = stoi(cs);}
        i++;
        t = ++counts[stoi(cs)];
        if(t == biggest){
            most = ( most > stoi(cs)) ? stoi(cs): most;
        } else if (t > biggest) {
            most = stoi(cs);
            biggest=t;
        } ;

    }
    cout << most << endl;

}