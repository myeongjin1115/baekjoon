#include <iostream>
using namespace std;

int solution(int N) {
    int answer;

    int count = 0;
    int n = N;
    while(n >= 5) {
        count += n / 5;
        n /= 5;
    }

    answer = count;

    return answer;
}

int main() {
    int N;

    cin >> N;

    cout << solution(N) << endl;

    return 0;
}