// https://www.acmicpc.net/problem/1037

#include <iostream>
using namespace std;

int main() {
    int N, i, max, min;
    int num[51];

    cin >> N;
    for(i = 0; i < N; i++) cin >> num[i];
    max = min = num[0];
    for(i = 1; i < N; i++) {
        if(max < num[i]) max = num[i];
        if(min > num[i]) min = num[i];
    }

    cout << max * min << endl;
}