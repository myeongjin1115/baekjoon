// https://www.acmicpc.net/problem/1929

#include <iostream>
#include <cmath>
#define MAX_SIZE 1000000 + 1
using namespace std;

int main() {
	int i, m, n;
	bool num[MAX_SIZE];
	double sqMax = sqrt(MAX_SIZE);
	
	num[0] = num[1] = false;
	for (i = 2; i < MAX_SIZE; i++) num[i] = true;
	for (i = 2; i < sqMax + 1; i++) {
		if (num[i]) {
			for (int j = i + i; j < MAX_SIZE; j += i) num[j] = false;
		}
	}
	
	cin >> m >> n;
	for (i = m; i <= n; i++) {
		if (num[i]) cout << i << '\n';
	}
	
	return 0;
}
