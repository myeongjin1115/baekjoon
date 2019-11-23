// https://www.acmicpc.net/problem/3053

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int r;
	
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << pow(r, 2) * M_PI << '\n' << 2 * pow(r, 2) << '\n';
	
	return 0;
}
