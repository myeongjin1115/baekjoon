#include <iostream>
#include <string>
using namespace std;

void solution(int N) {
    string s;
    int stack[10001];
    int top = 0;
    int i, num;

    for (i = 0; i < N; i++) {
        cin >> s;
        if (s == "push") {
            cin >> num;
            stack[++top] = num;
        }
        else if (s == "pop") {
            if (top == 0) cout << -1 << endl;
            else cout << stack[top--] << endl;
        }
        else if (s == "size") {
            cout << top << endl;
        }
        else if (s == "empty") {
            if (top == 0) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (s == "top") {
            if (top == 0) cout << -1 << endl;
            else cout << stack[top] << endl;
        }
    }
}

int main() {
    int N;

    cin >> N;

    solution(N);
}