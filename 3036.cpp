#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;
int input[MAX+1];
int N;

int gcd(int a, int b) {
    int c, tmp;

    while(b != 0) {
        c = a % b;
        a = b;
        b = c;
    }

    return a;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tmp;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> input[i];
    }

    for(int i = 1; i < N; i++) {
        tmp = gcd(input[0], input[i]);
        cout << input[0] / tmp << '/' << input[i] / tmp << '\n';
    }
}