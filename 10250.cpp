// https://www.acmicpc.net/problem/10250

#include <iostream>
using namespace std;

int main() {
	int t, h, w, n;
	
	cin >> t;
	while(t--) {
		cin >> h >> w >> n;
		if (!(n % h)) {
			cout << h;
			if (n / h < 10) cout << 0;
			cout << n / h << endl;
		}
		else{
			cout << n % h;
			if (n / h + 1 < 10) cout << 0;
			cout << n / h + 1 << endl;
		}
	}
	
	return 0;
}
