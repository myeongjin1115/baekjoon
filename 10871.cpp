#include <iostream>
using namespace std;

int main() {
	int n, x, num;
	int index = 0;
	int *arr;
	
	cin >> n >> x;
	
	arr = new int[n];
	
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (num < x) arr[index++] = num;
	}
	
	for (int i = 0; i < index; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';
	
	delete []arr;
	
	return 0;
}
