#include <iostream>
#define MAX_SIZE 1000000 + 1
using namespace std;

int i, j, N;
int input[MAX_SIZE];
int stack[MAX_SIZE];
int top = -1;
int answer[MAX_SIZE];

int main() {
    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> input[i];
    }

    stack[++top] = input[N - 1];
    answer[N - 1] = -1;
    for(i = N - 2; i >= 0; i--) {
        for(j = top; j >= 0; j--) {
            if(stack[j] > input[i]) {
                answer[i] = stack[j];
                top = j;
                stack[++top] = input[i];
                break;
            }
        }
        if(j == -1) {
            top = 0;
            stack[top] = input[i];
            answer[i] = -1;
        }
    }

    for(i = 0; i < N; i++) {
        cout << answer[i] << ' ';
    }
}