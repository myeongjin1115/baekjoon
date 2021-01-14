// https://www.acmicpc.net/problem/9251

#include <iostream>
#include <cstring>
#define MAX_SIZE 1000 + 1
#define MAX(a, b) (a > b) ? a : b
using namespace std;

char arr1[MAX_SIZE], arr2[MAX_SIZE];
int DP[MAX_SIZE][MAX_SIZE];

int main() {
    int i, j;
    
    for(i = 0; i < MAX_SIZE; i++) fill_n(DP[i], MAX_SIZE, 0);

    cin >> arr1;
    cin >> arr2;

    for(i = 0; i < strlen(arr1); i++) {
        for(j = 0; j < strlen(arr2); j++) {
            if(arr1[i] == arr2[j]) DP[i + 1][j + 1] = DP[i][j] + 1;
            else DP[i + 1][j + 1] = MAX(DP[i + 1][j], DP[i][j + 1]);
        }
    }

    cout << DP[strlen(arr1)][strlen(arr2)] << endl;
}