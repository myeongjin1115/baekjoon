#include <iostream>
using namespace std;

int main() {
    int K;
    int i, num, answer;

    int stack[100001];
    int top = -1;

    cin >> K;
    for(i = 0; i < K; i++) {
        cin >> num;

        if(num == 0) {
            top--;
        }
        else {
            stack[++top] = num;
        }
    }

    answer = 0;
    for(i = 0; i <= top; i++) {
        answer += stack[i];
    }

    cout << answer << endl;
}