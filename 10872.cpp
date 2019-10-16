// https://www.acmicpc.net/problem/10872

#include <iostream>
using namespace std;

long fact(int n) {
	long fact = 1;
	for (int i = 1; i <= n; i++) fact *= i;
	return fact;
}

int main() {
	int n;
	
	cin >> n;
	cout << fact(n) << '\n';
	
	return 0;
}
