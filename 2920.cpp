// https://www.acmicpc.net/problem/2920

#include <iostream>
using namespace std;

bool isAscending(int* inputInt);
bool isDescending(int* inputInt);

int main() {
	int inputInt[8];
	
	for (int i = 0; i < 8; i++) cin >> inputInt[i];
	
	if (isAscending(inputInt)) cout << "ascending\n";
	else if (isDescending(inputInt)) cout << "descending\n";
	else cout << "mixed\n";
	
	return 0;
}

bool isAscending(int* inputInt) {
	for (int i = 0; i < 8; i++) {
		if (inputInt[i] != i + 1) return false;
	}
	return true;
}

bool isDescending(int* inputInt) {
	for (int i = 0; i < 8; i++) {
		if (inputInt[i] != 8 - i) return false;
	}
	return true;
}
