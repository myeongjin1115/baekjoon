// https://www.acmicpc.net/problem/10871

#include <iostream>
using namespace std;

int main() {
	int arr[10000];
	int min[10000];
	int n, x;
	int count = 0;
	
	cin >> n >> x;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < x) min[count++] = arr[i];
	}
	for (int i = 0; i < count; i++) {
		cout << min[i] << ' ';
	}
	
	return 0;
}
