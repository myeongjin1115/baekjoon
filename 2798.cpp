// https://www.acmicpc.net/problem/2798

#include <iostream>
using namespace std;

int main() {
	int n, m, tmp, sum;
	
	cin >> n >> m;
	int arr[101];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sum = 0;
	
	for(int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				tmp = arr[i] + arr[j] + arr[k];
				if (tmp > sum && tmp <= m) sum = tmp;
			}
		}
	}
	
	cout << sum << '\n';
	
	return 0;
}
