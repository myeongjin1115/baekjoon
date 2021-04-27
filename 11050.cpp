#include <bits/stdc++.h>
using namespace std;

int factorial(int input) {
    int result = 1;

    for(int i = 1; i <= input; i++) {
        result = result * i;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    int result;

    cin >> N >> K;

    result = factorial(N) / (factorial(K) * factorial(N - K));

    cout << result << '\0';
}