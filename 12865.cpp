// https://www.acmicpc.net/problem/12865

#include <iostream>
using namespace std;

int N, K, i, j;
int W[101], V[101], DP[101][100001];

int main() {   
    cin >> N >> K;
    W[0] = V[0] = 0;
    for(i = 1; i <= N; i++) {
        cin >> W[i] >> V[i];
    }

    for(i = 0; i <= N; i++) {
        for(j = 0; j <= K; j++) {
            if(i == 0 || j == 0) DP[i][j] = 0;
            else if(j < W[i]) DP[i][j] = DP[i - 1][j];
            else DP[i][j] = (DP[i - 1][j] < DP[i - 1][j - W[i]] + V[i]) ? DP[i - 1][j - W[i]] + V[i] : DP[i - 1][j];
        }
    }

    cout << DP[N][K];
}