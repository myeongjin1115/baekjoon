// https://www.acmicpc.net/problem/1934

#include <iostream>
using namespace std;

int gcd(int a, int b) {
    int c;

    while(b != 0) {
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
    int T, i, num1, num2, tmp;

    cin >> T;
    for(i = 0; i < T; i++) {
        cin >> num1 >> num2;

        if(num1 < num2) {
            tmp = num1;
            num1 = num2;
            num2 = tmp;
        }

        cout << lcm(num1, num2) << endl;
    }
}