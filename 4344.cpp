// https://www.acmicpc.net/problem/4344

#include <iostream>
using namespace std;

int main() {
	int c, n;
	double sum, avg, count, ratio;
	int arr[1000] = { 0 };
	
	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> n;
		sum = avg = count = ratio = 0;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			sum += arr[j];
		}
		avg = sum / n;
		for (int j = 0; j < n; j++) {
			if (arr[j] > avg) count++;
		}
		ratio = count / n * 100;
		cout << fixed;
		cout.precision(3);
		cout << ratio << '%' << '\n';
	}
	
	return 0;
}
