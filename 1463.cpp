// https://www.acmicpc.net/problem/1463

#include <iostream>
#define MAX_SIZE 1000000 + 1
#define MIN(a, b) (a < b) ? a : b
using namespace std;

int DP[MAX_SIZE];

int main() {
    int i, N;

    DP[1] = 0;
    for(i = 2; i < MAX_SIZE; i++) {
        DP[i] = DP[i - 1] + 1;
        if(!(i % 3)) DP[i] = MIN(DP[i], DP[i / 3] + 1);
        if(!(i % 2)) DP[i] = MIN(DP[i], DP[i / 2] + 1);
    }

    cin >> N;
    
    cout << DP[N] << endl;
}