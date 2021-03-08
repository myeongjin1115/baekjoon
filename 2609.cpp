// https://www.acmicpc.net/problem/2609

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
    int num1, num2, tmp;

    cin >> num1 >> num2;

    if(num1 < num2) {
        tmp = num1;
        num1 = num2;
        num2 = tmp;
    }

    cout << gcd(num1, num2) << endl;
    cout << lcm(num1, num2) << endl;
}