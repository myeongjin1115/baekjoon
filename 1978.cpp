// https://www.acmicpc.net/problem/1978

#include <iostream>
#include <cstring>
#include <cmath>
#define MAX_SIZE 1000 + 1
using namespace std;

int main() {
	bool num[MAX_SIZE];
	int n, tmp;
	int count = 0;
	double sqMax = sqrt(MAX_SIZE);
	num[0] = num[1] = false;
	for (int i = 2; i < MAX_SIZE; i++) num[i] = true;
	for (int i = 2; i < sqMax + 1; i++) {
		if (num[i]) {
			for (int j = i + i; j < MAX_SIZE; j += i) num[j] = false;
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (num[tmp]) count++;
	}
	cout << count << '\n';
	
	return 0;
}
