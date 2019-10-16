// https://www.acmicpc.net/problem/10950

#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << '\n';
	}
	
	return 0;
}
