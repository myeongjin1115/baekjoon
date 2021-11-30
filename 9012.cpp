#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i, j, T;
    char c;
    char s[51];
    char stack[51];
    int top;
    bool check;

    cin >> T;
    for(i = 0; i < T; i++) {
        fill_n(stack, 51, 0);
        top = -1;
        check = false;
        cin >> s;

        for(j = 0; j < strlen(s); j++) {
            if(s[j] == '(') {
                stack[++top] = s[j];
            }
            else {
                top--;
                if(top < -1) {
                    check = true;
                    top = -1;
                }
            }
        }

        if(top == -1 && check == false) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}