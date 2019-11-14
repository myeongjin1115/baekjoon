// https://www.acmicpc.net/problem/2775

#include <iostream>
using namespace std;

int main() {
	int t, k, n, i, j;
	int room[15][15];
	for(i = 0; i < 15; i++) {
		room[0][i] = i + 1;
		room[i][0] = 1;
	}
	for(i = 1; i < 15; i++) {
		for(j = 1; j < 15; j++) room[i][j] = room[i - 1][j] + room[i][j - 1];
	}
	
	cin >> t;
	while(t--) {
		cin >> k >> n;
		cout << room[k][n - 1] << endl;
	}
	
	return 0;
}
