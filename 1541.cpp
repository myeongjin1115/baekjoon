// https://www.acmicpc.net/problem/1541

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int i, tmp, numCnt, opCnt, result;
    char s[51], num[6], opr[30];
    int nums[42];

    cin >> s;

    i = 0; tmp = 0; numCnt = 0; opCnt = 0;
    while(s[i]) {
        if('0' <= s[i] && s[i] <= '9') {
            num[tmp++] = s[i];
        }
        else if(s[i] == '+' || s[i] == '-') {
            nums[numCnt++] = atoi(num);
            std::fill_n(num, 6, NULL);
            tmp = 0;
            opr[opCnt++] = s[i];
        }
        i++;
    }
    nums[numCnt++] = atoi(num);

    result = nums[0];
    for(i = 0; i < opCnt; i++) {
        if(opr[i] == '-') break;
        result += nums[i + 1];
    }
    for(i; i < opCnt; i++) {
        result -= nums[i + 1];
    }

    cout << result;
}