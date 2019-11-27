// https://www.acmicpc.net/problem/2750

#include <iostream>
using namespace std;

int main() {
	int N, tmp;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	
	for (int i = 0; i < N; i++) cout << arr[i] << '\n';
}
