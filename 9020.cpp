// https://www.acmicpc.net/problem/9020

#include <iostream>
#include <cmath>
#define MAX_SIZE 10000 + 1
using namespace std;

int main() {
	bool isPrime[MAX_SIZE];
	double sqMax = sqrt(MAX_SIZE);
	int i, t, n;
	
	isPrime[0] = isPrime[1] = false;
	for (i = 2; i < MAX_SIZE; i++) isPrime[i] = true;
	for (i = 2; i < sqMax; i++) {
		if (isPrime[i]) {
			for (int j = i + i; j < MAX_SIZE; j += i) isPrime[j] = false;
		}
	}
	
	cin >> t;
	while(t--) {
		cin >> n;
		int halfN = n / 2;
		for (i = 0; i <= halfN; i++) {
			if (isPrime[halfN - i] && isPrime[halfN + i]) {
				cout << halfN - i << ' ' << halfN + i << '\n';
				break;
			}
		}
	}
	
	return 0;
}
