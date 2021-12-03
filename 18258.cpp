#include <iostream>
#include <string>
#define MAX_SIZE 2000000 + 1
using namespace std;

string s;
int i, N, num;
int queue[MAX_SIZE];
int front = 0;
int back = 0;

int main() {
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> s;

        if(s == "push") {
            cin >> num;
            queue[back++] = num;
        }
        else if(s == "pop") {
            if(front == back) cout << -1 << '\n';
            else cout << queue[front++] << '\n';
        }
        else if(s == "size") {
            cout << back - front << '\n';
        }
        else if(s == "empty") {
            if(front == back) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
        else if(s == "front") {
            if(front == back) cout << -1 << '\n';
            else cout << queue[front] << '\n';
        }
        else if(s == "back") {
            if(front == back) cout << -1 << '\n';
            else cout << queue[back - 1] << '\n';
        }
    }
}