#include <iostream>
using namespace std;

int main() {
	int n, inputNum, max, min;
	
	cin >> n;
	
	cin >> inputNum;
	max = min = inputNum;
	
	while(--n) {
		cin >> inputNum;
		if (max < inputNum) max = inputNum;
		if (min > inputNum) min = inputNum;
	}
	
	cout << min << ' ' << max << endl;
	
	return 0;
}
