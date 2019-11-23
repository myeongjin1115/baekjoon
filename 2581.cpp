// https://www.acmicpc.net/problem/2581

#include <iostream>
#include <cmath>
#define MAX_SIZE 10000 + 1
using namespace std;

int main() {
	int m, n, i;
	int min = MAX_SIZE + 1;
	int sum = 0;
	bool num[MAX_SIZE];
	double sqMax = sqrt(MAX_SIZE);
	
	num[0] = num[1] = false;
	for (i = 2; i < MAX_SIZE; i++) num[i] = true;
	for (i = 2; i < sqMax + 1; i++) {
		for (int j = i + i; j < MAX_SIZE; j += i) num[j] = false;
	}
	
	cin >> m >> n;
	for (i = m; i <= n; i++) {
		if (num[i]) {
			if (min > i) min = i;
			sum += i;
		}
	}
	if (min == MAX_SIZE + 1) cout << -1 << '\n';
	else cout << sum << '\n' << min << '\n';
	
	return 0;
}
