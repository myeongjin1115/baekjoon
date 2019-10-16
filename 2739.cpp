// https://www.acmicpc.net/problem/2739

#include <iostream>
using namespace std;

int main() {
	int inputNum;
	
	cin >> inputNum;
	for (int i = 1; i <= 9; i++) cout << inputNum << " * " << i << " = " << inputNum * i << '\n';
	
	return 0;
}
