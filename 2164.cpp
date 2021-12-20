#include <iostream>
#define MAX_SIZE 1000000 + 1
using namespace std;

int main() {
    int i, N;
    int queue[MAX_SIZE * 2];
    int front, back;

    front = back = 0;

    cin >> N;
    for(i = 1; i <= N; i++) {
        queue[back++] = i;
    }

    front++;
    while(back - front > 1) {
        queue[back++] = queue[front++];
        front++;
    }
    cout << queue[back-1] << endl;
}