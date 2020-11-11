// https://www.acmicpc.net/problem/2446

#include <iostream>
using namespace std;

int main() {
    int N, i, j, p, size;
    
    cin >> N;
    size = 2 * N - 1;
    p = 0;

    for(i = 0; i < size; i++) {
        for(j = 0; j < p; j++) cout << ' ';
        for(j = 0; j < size - 2 * p; j++) cout << '*';
        if(i >= N - 1) p--;
        else p++;
        cout << '\n';
    }

    return 0;
}