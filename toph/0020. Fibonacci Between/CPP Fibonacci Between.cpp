#include <iostream>
#include <string>
using namespace std;

int main() {
    int L,R;

    cin >> L;
    cin >> R;
    int f1=0, f2=1, f3=1;
    int tempNum = -1;
    while (f1 <= R) {
        if (f1 >= L && f1 <=R) {
            if(tempNum != f1)
            cout << f1 << endl;
            tempNum = f1;
        }
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;

    }
    return 0;
}