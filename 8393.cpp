// https://www.acmicpc.net/problem/8393

#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	
	cin >> n;
	for (int i = 1; i <= n; i++) sum += i;
	cout << sum << '\n';
	
	return 0;
}
