#include <iostream>
#define MAX_SIZE 100000 + 1
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j, n;
    int input[MAX_SIZE];
    int stack[MAX_SIZE];
    int next = 1;
    int top = -1;
    char result[MAX_SIZE * 2 - 1];
    int result_cnt = 0;

    cin >> n;
    for(i = 0; i < n; i++) {
        cin >> input[i];
    }

    for(i = 0; i < n; i++) {
        if(next <= input[i]) {
            for(j = next; j <= input[i]; j++) {
                stack[++top] = j;
                result[result_cnt++] = '+';
            }
            next = input[i] + 1;
        }

        if(stack[top] == input[i]) {
            top--;
            result[result_cnt++] = '-';
        }
        else break;
    }
    
    if(i == n && top == -1) {
        for(i = 0; i < result_cnt; i++) cout << result[i] << '\n';
    }
    else cout << "NO" << endl;
}