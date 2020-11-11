// https://www.acmicpc.net/problem/10996

#include <iostream>
using namespace std;

int main() {
    int N, i, j;

    cin >> N;

    if(N == 1) cout << '*';
    else {
        for(i = 0; i < 2 * N; i++) {
            if(i % 2) {
                for(j = 0; j < N; j++) {
                    if(j % 2) cout << " *";
                }
            } else {
                for(j = 0; j < N; j++) {
                    if(j == 0) cout << '*';
                    else if(!(j % 2)) cout << " *";
                }
            }
            cout << endl;
        }
    }

    return 0;
}