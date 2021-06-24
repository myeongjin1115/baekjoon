// https://www.acmicpc.net/problem/1010

#include <iostream>
using namespace std;

int T, N, M;
long long arr[31][31];

long long combination(int N, int M) {
    if(arr[N][M]) return arr[N][M];

    if(N == 0 || N == M) arr[N][M] = 1;
    else {
        arr[N][M] = combination(N-1, M-1) + combination(N, M-1);
    }

    return arr[N][M];
}

int main() {
    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N >> M;

        cout << combination(N, M) << endl;
    }
}