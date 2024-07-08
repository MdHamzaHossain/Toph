#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    int tempCoord[2];
    int coOrdList[N][2];
    double smallestDistance=0.00;
    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;

            coOrdList[i][0] = x;
            coOrdList[i][1] = y;
            if(i==0) continue;
        for(int i1=0;i1 < i; i1++){
           // cout << "old (" << coOrdList[i1][0] << " , " << coOrdList[i1][1] << ") new (" << x << ", " << y << ")" << endl;
            double dist = pow((pow(coOrdList[i1][0]-x,2) + pow(coOrdList[i1][1]-y,2)),.5);
            if(dist < smallestDistance || i==1) {
                smallestDistance = dist;
            }
        }
    }
    cout << smallestDistance << endl;
    return 0;
}