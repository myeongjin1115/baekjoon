// https://www.acmicpc.net/problem/1546

#include <iostream>
using namespace std;

int main() {
	int n;
	int max = 0;
	double sum = 0;
	double arr[1000];
	double avg;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (max < arr[i]) max = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	avg = sum / n;
	
	cout << avg << '\n';
	
	return 0;
}
