#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N;
     getline(cin>>ws, S);
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string R ="";
    for(auto c : S){
        if(abc.find(c) == variant_npos) {

            R += c;
            continue;
        }
        int index = N>(abc.find(c))  ?  (abc.size() + (abc.find(c)-N)): (abc.find(c)-N);
        //cout << "index " <<index<<"  abc.find(c) " << abc.find(c) << " N " << N << endl;

        R.push_back( abc[index] );
    }
    cout << R << endl;
    return 0;
}