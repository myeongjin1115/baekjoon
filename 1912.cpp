// https://www.acmicpc.net/problem/1912

#include <iostream>
using namespace std;
#define MAX_SIZE 100000 + 1

int main() {
    int n, i, j, max;
    int num[MAX_SIZE];
    int DP[MAX_SIZE];

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> num[i];
    }

    DP[0] = max = num[0];
    for(i = 1; i < n; i++) {
        DP[i] = (DP[i - 1] + num[i] < num[i]) ? num[i] : DP[i - 1] + num[i];
        if(DP[i] > max) max = DP[i];
    }

    cout << max;
}