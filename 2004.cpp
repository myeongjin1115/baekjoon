// https://www.acmicpc.net/problem/2004

#include <iostream>
using namespace std;

int count5(int num) {
    int count = 0;
    int temp = num;

    while(temp >= 5) {
        count += temp / 5;
        temp /= 5;
    }

    return count;
}

int count2(int num) {
    int count = 0;
    int temp = num;

    while(temp >= 2) {
        count += temp / 2;
        temp /= 2;
    }

    return count;
}

int solution(int n, int m) {
    int answer = 0;

    answer = min(count5(n) - count5(m) - count5(n-m), count2(n) - count2(m) - count2(n-m));

    return answer;
}

int main() {
    int n, m;

    cin >> n >> m;
    cout << solution(n, m) << endl;

    return 0;
}