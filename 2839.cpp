// https://www.acmicpc.net/problem/2839

#include <iostream>
using namespace std;

int main() {
	int n;
	int five, three = 0;
	int count;
	
	cin >> n;
	
	five = n / 5;
	n %= 5;
	while (n % 3) {
		five--;
		n += 5;
	}
	three = n / 3;
	if (five < 0) cout << -1 << '\n';
	else {
		count = five + three;
		cout << count << '\n';
	}
	
	return 0;
}
