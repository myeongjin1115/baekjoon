// https://www.acmicpc.net/problem/13305

#include <iostream>
using namespace std;

int main() {
    int N, i;
    int price[100001];
    long long length[100001];
    long long min, result;

    cin >> N;
    for(i = 0; i < N-1; i++) {
        cin >> length[i];
    }
    for(i = 0; i < N; i++) {
        cin >> price[i];
    }

    result = 0;
    min = price[0];
    for(i = 1; i < N; i++) {
        result += min * length[i - 1];
        if(price[i] < min) min = price[i];
    }

    cout << result;
}