#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    int c, tmp;

    while (b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int N, i, gcf;
    int input[100];
    vector<int> result;

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> input[i];
    }

    gcf = abs(input[0] - input[1]);
    for(i = 1; i < N-1; i++) {
        gcf = gcd(gcf, abs(input[i] - input[i+1]));
    }

    for(i = 1; i * i <= gcf; i++) {
        if(gcf % i == 0) {
            result.push_back(i);
            result.push_back(gcf / i);
        }
    }

    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());

    for(int i : result) {
        if(i != 1) cout << i << ' ';
    }
}