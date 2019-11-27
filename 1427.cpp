// https://www.acmicpc.net/problem/1427

#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	char arr[10];
	long N;
	int tmp;
	int i = 0;
	
	cin >> N;
	
	while(N > 0) {
		arr[i] = (N % 10) + '0';
		N /= 10;
		i++;
	}
	sort(arr, arr + i, desc);
	
	for (int j = 0; j < i; j++) cout << arr[j];
	cout << '\n';
	
	return 0;
}
