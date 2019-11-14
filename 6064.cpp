// https://www.acmicpc.net/problem/6064

#include <iostream>
using namespace std;

int main() {
	int t, m, n, x, y;
	bool flag;
	
	cin >> t;
	while(t--) {
		flag = false;
		cin >> m >> n >> x >> y;
		for (int i = 0; i < n; i++) {
			if ((m * i + x - y) % n == 0) {
				cout << m * i + x << endl;
				flag = true;
				break;
			}
		}
		if (!flag) cout << -1 << endl;
	}
	
	return 0;
}
