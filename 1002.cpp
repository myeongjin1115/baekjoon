// https://www.acmicpc.net/problem/1002

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	int t, x1, y1, r1, x2, y2, r2, d, sum, dif;
	
	cin >> t;
	while(t--) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = pow(x2 - x1, 2) + pow(y2 - y1, 2);
		sum = pow(r1 + r2, 2);
		dif = pow(r1 - r2, 2);
		
		if (d == 0) {
			if (dif == 0) cout << -1 << '\n';
			else cout << 0 << '\n';
		}
		else if (d == sum || d == dif) cout << 1 << '\n';
		else if (dif < d && d < sum) cout << 2 << '\n';
		else cout << 0 << '\n';
	}
	
	return 0;
}
