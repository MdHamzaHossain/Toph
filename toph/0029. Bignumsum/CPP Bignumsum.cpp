#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin >> s1 ;
    cin >> s2;
    int res[42];
    int s=0,c=0,a,b;
    for(int i=39;i>=0;i--){
        a= s1[i] - '0';
        b= s2[i] - '0';
        
        s= a+b+c;
        c= s>9 ? s/10 : 0;
        
        res[i+2]=s%10;
        
        if(i == 0 && c >0){
            res[i+1] = c %10;
            if(c > 0){
            c = c /10;
            res[i] = c;

            }
        } else {
                    res[i+1] = 0;
        res[i] = 0;

        }
        
        
    }
    bool nonZeroReached = false;
    for(int i=0; i<42; i++){
        
        if(res[i] == 0 && !nonZeroReached) continue;
         nonZeroReached = true; 
        cout << res[i] ;

    }
}