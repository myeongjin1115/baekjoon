// https://www.acmicpc.net/problem/4673

#include <iostream>
using namespace std;

int selfNum[10001] = { 0 };

void isNotSelfNum(int n) {
	int sum = n;
	while(n >= 10) {
		sum += n % 10;
		n /= 10;
	}
	sum += n;
	selfNum[sum]++;
}

int main() {
	int n;
	
	for (int i = 1; i < 10001; i++) isNotSelfNum(i);
	for (int i = 1; i < 10001; i++) {
		if (!selfNum[i]) cout << i << '\n';
	}
}
