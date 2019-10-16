// https://www.acmicpc.net/problem/3052

#include <iostream>
using namespace std;

int main() {
	int inputNum;
	int count = 0;
	bool isThere[42] = { false };
	
	for (int i = 0; i < 10; i++) {
		cin >> inputNum;
		isThere[inputNum % 42] = true;
	}
	
	for (int i = 0; i < 42; i++) {
		if (isThere[i]) count++;
	}
	
	cout << count << '\n';
	
	return 0;
}
