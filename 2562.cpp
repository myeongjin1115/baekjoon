#include <iostream>
using namespace std;

int main() {
	int arr[9];
	int max, index;
	
	cin >> arr[0];
	index = 1;
	max = arr[index - 1];
	
	for (int i = 1; i < 9; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			index = i + 1;
			max = arr[index - 1];
		}
	}
	
	cout << max << endl;
	cout << index << endl;
	
	return 0;
}
