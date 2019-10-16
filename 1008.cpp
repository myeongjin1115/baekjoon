// https://www.acmicpc.net/problem/1008

#include <iostream>
using namespace std;

int main() {
	double a, b;
	
	cin >> a >> b;
	cout.setf(ios::fixed);
	cout.precision(9);
	cout << a / b << "\n";
	
	return 0;
}
