// https://www.acmicpc.net/problem/10039

#include <iostream>
using namespace std;

int main() {
    int student, result;
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        cin >> student;
        if(student < 40) student = 40;
        sum += student;
    }
    result = sum / 5;
    cout << result << endl;

    return 0;
}