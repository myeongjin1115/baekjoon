// https://www.acmicpc.net/problem/2447

#include <iostream>
using namespace std;

bool field[6561][6561] = {false};

void fillField(int n, int x, int y) {
	if (n == 3) {
		for (int i = y; i < n + y; i++) {
			for (int j = x; j < n + x; j++) {
				if (i != y + n / 3 || j != x + n / 3) field[i][j] = true;
			}
		}
	}
	else {
		for (int i = y; i < n + y; i += n / 3) {
			for (int j = x; j < n + x; j += n / 3) {
				if (i != y + n / 3 || j != x + n / 3) fillField(n / 3, j, i);
			}
		}
	}
}

int main() {
	int n;
	
	cin >> n;
	fillField(n, 0, 0);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (field[i][j]) cout << '*';
			else cout << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
