// https://www.acmicpc.net/problem/2562

#include <iostream>
using namespace std;

int main() {
	int inputNum, max;
	int index = 1;
	
	cin >> inputNum;
	max = inputNum;
	for (int i = 2; i <= 9; i++) {
		cin >> inputNum;
		if (max < inputNum) {
			max = inputNum;
			index = i;
		}
	}
	
	cout << max << '\n' << index << '\n';
	
	return 0;
}
