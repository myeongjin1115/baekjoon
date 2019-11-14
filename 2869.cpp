// https://www.acmicpc.net/problem/2869

#include <iostream>
using namespace std;

int main() {
	int a, b, v, result;
	
	cin >> a >> b >> v;
	result = (v - a) / (a - b) + 1;
	if ((v - a) % (a - b)) result++;
	cout << result << endl;
	
	return 0;
}
