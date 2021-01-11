// https://www.acmicpc.net/problem/10757

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int i, j, k, num;
    bool carry = false;
    char A[10001], B[10001], result[10002];

    cin >> A;
    cin >> B;

    i = strlen(A) - 1;
    j = strlen(B) - 1;
    if(i > j) k = i;
    else k = j;

    memset(result, 0, k + 2);

    while(i > -1 && j > -1) {
        if(carry) num = A[i] - '0' + B[j] - '0' + 1;
        else num = A[i] - '0' + B[j] - '0';
        if(num >= 10) {
            num %= 10;
            carry = true;
        }
        else {
            carry = false;
        }
        result[k] = '0' + num;
        i--;
        j--;
        k--;
    }
    while(i > -1) {
        if(carry) num = A[i] - '0' + 1;
        else num = A[i] - '0';
        if(num >= 10) {
            num %= 10;
            carry = true;
        }
        else {
            carry = false;
        }
        result[k] = '0' + num;
        i--;
        k--;
    }
    while(j > -1) {
        if(carry) num = B[j] - '0' + 1;
        else num = + B[j] - '0';
        if(num >= 10) {
            num %= 10;
            carry = true;
        }
        else {
            carry = false;
        }
        result[k] = '0' + num;
        j--;
        k--;
    }
    if(carry) {
        cout << 1 << result << endl;
    }
    else {
        cout << result << endl;
    }

    return 0;
}