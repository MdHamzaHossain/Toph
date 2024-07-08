#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[6];
    int ind[] = {1,5,10,50,100,500};
    ar[5] = n/500;
    n=n%500;
    ar[4]=n/100;
    n=n%100;
    ar[3]= n/50;
    n=n%50;
    ar[2]=n/10;
    n=n%10;
    ar[1]=n/5;
    n=n%5;
    ar[0]=n;
    for(int i=0; i< 6;i++){
        for(int j =0; j < ar[i]; j++){
            cout << ind[i];
            if((i == 5) && (j == (ar[i]-1))) continue;
            cout << " ";

        }
    }
}