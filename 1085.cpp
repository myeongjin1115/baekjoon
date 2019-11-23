// https://www.acmicpc.net/problem/1085

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[4];
	
	for (int i = 0; i < 4; i++) cin >> arr[i];
	arr[2] -= arr[0];
	arr[3] -= arr[1];
	sort(arr, arr + 4);
	cout << arr[0] << '\n';
	
	return 0;
}
