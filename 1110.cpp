// https://www.acmicpc.net/problem/1110

#include <iostream>
using namespace std;

int main() {
	int n, cpN;
	int count = 0;
	
	cin >> n;
	cpN = n;
	do {
		n = (n / 10 + (n % 10)) % 10 + (n % 10) * 10;
		count++;
	} while (cpN != n);
	
	cout << count << '\n';
	
	return 0;
}
