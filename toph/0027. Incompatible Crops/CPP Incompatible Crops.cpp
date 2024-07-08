#include <bits/stdc++.h>

using namespace std;

int main() {
    int R,C;
    int safe=0;
    cin >> R >> C;
    string S = "T";
    int i=0;
    for(i=1; i<=R; i++){
        char cT;
        int j;
        for (j=1; j<=C; j++){
            cin >> cT;
            S+= cT;
        }
    }
    for(i=1; i<=R*C; i++){
        char cT, Lc,Rc,Tc,Bc;
        cT=S[i];
        Tc = ((i-C)<=0) ?'.': S[i-C];
        Bc = ((i+C)>(R*C)) ?'.': S[i+C];
        Lc=((i-1)+C)%C==0? '.' : S[i-1];
        Rc=((i+1))%C==1? '.' : S[i+1];
        if(cT == '.' && Lc == '.' && Rc == '.' && Tc == '.' && Bc == '.') {
            safe++;
        };

    }
    cout << safe << endl;
    return 0;
}
