// https://www.acmicpc.net/problem/1065

#include <iostream>
using namespace std;

int isEvenSequence(int n) {
	int i;
	int arr[4] = { 0 };
	for (i = 0; i < 4; i++) {
		if (n >= 10) {
			arr[i] = n % 10;
			n /= 10;
		}
		else {
			arr[i] = n;
			break;
		}
	}
	if (i <= 1) return 1;
	else if (i == 2) {
		if (arr[0] - arr[1] == arr[1] - arr[2]) return 1;
	}
	else {
		if (arr[0] - arr[1] == arr[1] - arr[2] && arr[1] - arr[2] == arr[2] - arr[3]) return 1;
	}
	return 0;
}

int main() {
	int n;
	int sum = 0;
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += isEvenSequence(i);
	}
	cout << sum << '\n';
	
	return 0;
}
