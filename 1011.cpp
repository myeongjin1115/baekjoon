// https://www.acmicpc.net/problem/1011

#include <iostream>
using namespace std;

int main() {
	int t, i;
	unsigned int x, y, n;
	
	cin >> t;
	while(t--) {
		i = 1;
		cin >> x >> y;
		n = y - x;
		while(n > i * (i - 1)) i++;
		if (n - (i - 1) * (i - 2) > (i * (i - 1) - (i - 1) * (i - 2)) / 2) cout << (i - 1) * 2 << endl;
		else {
			if (i == 1) cout << 0 << endl;
			else cout << (i - 1) * 2 - 1 << endl;
		}
	}
	
	return 0;
}
