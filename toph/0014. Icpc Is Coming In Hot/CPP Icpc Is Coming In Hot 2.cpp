#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int m=0, c=0;
    char ch;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for(int j=0; j <s.size(); j++){
        if(s[j] ==s[j+1]){
            c++;
            if(c>m){
                m=max(c,m);
                ch=s[j];
            }
        } else c=1;
    }
    cout << ch <<endl;
    return 0;
}
// Maria apu