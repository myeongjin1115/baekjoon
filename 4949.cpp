#include <iostream>
#include <cstring>
#define MAX_SIZE 100
using namespace std;


int main() {
    int i, top;
    char buffer[MAX_SIZE + 1];
    char stack[MAX_SIZE + 1];

    while(true) {
        fill_n(buffer, MAX_SIZE + 1, 0);
        fill_n(stack, MAX_SIZE + 1, 0);
        top = -1;

        cin.getline(buffer, MAX_SIZE + 1);

        if(!strcmp(buffer, ".")) {
            break;
        }

        for(i = 0; i < strlen(buffer); i++) {
            if(buffer[i] == '(' || buffer[i] == '[') {
                stack[++top] = buffer[i];
            }
            else if(buffer[i] == ')') {
                if(stack[top] == '(') {
                    top--;
                }
                else break;
            }
            else if(buffer[i] == ']') {
                if(stack[top] == '[') {
                    top--;
                }
                else break;
            }
        }

        if(i == strlen(buffer) && top == -1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}