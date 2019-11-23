// https://www.acmicpc.net/problem/4948

#include <iostream>
#include <cmath>
#define MAX_SIZE 123456 * 2 + 1
using namespace std;

int main() {
	bool num[MAX_SIZE];
	double sqMax = sqrt(MAX_SIZE);
	int i, n, count;
	
	num[0] = num[1] = false;
	for (i = 2; i < MAX_SIZE; i++) num[i] = true;
	for (i = 2; i < sqMax + 1; i++) {
		if (num[i]) {
			for (int j = i + i; j < MAX_SIZE; j += i) num[j] = false;
		}
	}
	
	while (true) {
		cin >> n;
		if (n == 0) break;
		count = 0;
		for (i = n + 1; i <= 2 * n; i++) {
			if (num[i]) count++;
		}
		cout << count << '\n';
	}
	
	return 0;
}
