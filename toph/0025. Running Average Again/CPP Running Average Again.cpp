#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    int Ts = T;
    int sun = 0;
    int i=1;
    while(i<=T){
        int temp;
        cin >> temp;
        sun+=temp;
        double result = (double)sun/i;
        cout << result << endl;
        i++;

    }
    return 0;
}
