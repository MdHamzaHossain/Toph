#include <bits/stdc++.h>
using namespace std;

int main() {
	int M, N;
	cin >> M >> N;
    int matrix[M][N];
	for (int i = 0; i < M; ++i) {
		for (int j = 0; j < N; ++j) {
            int t;
			cin >>t;
            matrix[i][j] = t;
		}
	}
	int Q;
	cin >> Q;
	for (int i = 0; i < Q; ++i) {
		int r, c;
		cin >> r >> c;
        int tar[9];
        tar[0] = matrix[r][c-1];
        tar[1] = matrix[r-1][c-1];
        tar[2] = matrix[r-1][c];
        tar[3] = matrix[r+1][c-1];
        tar[4] = matrix[r][c];
        tar[5] = matrix[r-1][c+1];
        tar[6] = matrix[r+1][c];
        tar[7] = matrix[r+1][c+1];
        tar[8] = matrix[r][c+1];
        int t=0;
        for(int rn=r-1; rn<r+2; rn++){
            for(int cn=c-1; cn<c+2; cn++){
                //cout << "matrix [" << rn << "][" << cn <<"] turned from " << matrix[rn][cn] << " to " << tar[t]  << endl;
                matrix[rn][cn]= tar[t];
                t++;
            }
        }
        for (int i1= 0; i1 < M; i1++) {
            for (int j1 = 0; j1 < N; j1++) {
                cout << matrix[i1][j1];
                if(j1 < (N-1)) cout << " ";
            }
            cout << "\n";
        }

    }


	return 0;
}

