// https://www.acmicpc.net/problem/5086

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    while(true) {
        cin >> num1 >> num2;
        if(num1 == 0 && num2 == 0) break;
        if(num2 % num1 == 0) cout << "factor" << endl;
        else if(num1 % num2 == 0) cout << "multiple" << endl;
        else cout << "neither" << endl;
    }
}