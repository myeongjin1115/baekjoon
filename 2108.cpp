// https://www.acmicpc.net/problem/2108

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, median, mode, range;
	double arithmetic;
	int sum = 0, tmp = 0, first = 0, second = 0;
	int countNum[8001] = {0};
	
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	arithmetic = (double)sum / N;
	sort(arr, arr + N);
	median = arr[N / 2];

	for (int i = 0; i < N; i++) {
		countNum[4000 + arr[i]]++;
	}
	for (int i = 0; i < 8001; i++) {
		if (tmp < countNum[i]) tmp = countNum[i];
	}
	for (int i = 8000; i >= 0; i--) {
		if (tmp == countNum[i]) {
			second = first;
			first = i;
		}
	}
	if (second == 0) mode = first - 4000;
	else mode = second - 4000;
	
	range = arr[N - 1] - arr[0];
	
	cout << fixed;
	cout.precision(0);
	cout << arithmetic << '\n' << median << '\n' << mode << '\n' << range << '\n';
	
	return 0;
}
