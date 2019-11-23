// https://www.acmicpc.net/problem/2231

#include <iostream>
using namespace std;

int main() {
	int n, i, sum, tmp;
	bool flag = false;
	
	cin >> n;
	
	for (i = n - 54; i < n; i++) {
		sum = tmp = i;
		while (tmp > 0) {
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum == n) {
			flag = true;
			break;
		}
	}
	if (flag) cout << i << '\n';
	else cout << 0 << '\n';
	
	return 0;
}
