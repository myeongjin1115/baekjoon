// https://www.acmicpc.net/problem/2523

#include <iostream>
using namespace std;

int main() {
    int N, j;
    int i = 0, p = 0;
    cin >> N;

    while(i < 2 * N - 1) {
        i++;
        if(i > N) p--;
        else p++;
        for(j = 0; j < p; j++) cout << '*';
        cout << endl;
    }

    return 0;
}