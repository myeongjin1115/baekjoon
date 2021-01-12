// https://www.acmicpc.net/problem/11653

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, j, N;
    double sqN;

    cin >> N;
    sqN = sqrt(N);

    for(i = 2; i < sqN + 1; i++) {
        while(!(N % i)) {
            cout << i << endl;
            N /= i;
        }
    }

    if(N != 1) cout << N << endl;
}