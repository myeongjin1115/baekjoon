// https://www.acmicpc.net/problem/10818

#include <iostream>
using namespace std;

int main() {
	int n, max, min, inputNum;
	
	cin >> n;
	cin >> inputNum;
	max = min = inputNum;
	for (int i = 1; i < n; i++) {
		cin >> inputNum;
		if (max < inputNum) max = inputNum;
		else if (min > inputNum) min = inputNum;
	}
	
	cout << min << ' ' << max << '\n';
	
	return 0;
}
