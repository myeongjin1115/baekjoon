// https://www.acmicpc.net/problem/11047

#include <iostream>
using namespace std;

int main() {
    int N, K, i, count;
    int A[10];

    cin >> N >> K;
    for(i = 0; i < N; i++) {
        cin >> A[i];
    }

    count = 0;
    for(i = N-1; i >= 0; i--) {
        while(K / A[i]) {
            count += K / A[i];
            K %= A[i];
        }
    }

    cout << count;
}