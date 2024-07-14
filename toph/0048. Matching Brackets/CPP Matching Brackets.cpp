#include<bits/stdc++.h>
using namespace std;

int main(){
    string S;
    cin >> S;
    string indexerOp = "[{(";
    string indexerCl = "]})";
    vector <int> tracker;
    int upperMostIndex = 0;
    bool valid = true;
    /*
    * 1
    */
    for(auto C: S){
        int foundIndex = indexerOp.find(C);
        //cout << foundIndex;
        if(foundIndex+1){
            //tracker[upperMostIndex]= foundIndex;
            tracker.push_back((foundIndex));
            upperMostIndex++;
        } else {
            foundIndex = indexerCl.find(C);
            if (tracker.size()==0 ||  tracker.back() != foundIndex) { valid = false; }
            else {
                tracker.pop_back();
            }
        }
    }
	if(tracker.size() != 0) valid = false;
    cout << (valid?"Yes":"No") << endl;
    return 0;
}