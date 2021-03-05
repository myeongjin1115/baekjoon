// https://www.acmicpc.net/problem/11399

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, i, result;
    int P[1001], sum[1001];

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> P[i];
    }

    sort(P, P + N);

    sum[0] = P[0];
    for(i = 1; i < N; i++) {
        sum[i] = P[i] + sum[i - 1];
    }

    result = 0;
    for(i = 0; i < N; i++) {
        result += sum[i];
    }

    cout << result;
}