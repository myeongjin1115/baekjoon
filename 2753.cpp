// https://www.acmicpc.net/problem/2753

#include <iostream>
using namespace std;

int main() {
	int year;
	bool leap = false;
	
	cin >> year;
	if (!(year % 4)) {
		leap = 1;
		if (!(year % 100)) {
			leap = 0;
			if (!(year % 400)) leap = 1;
		}
	}
	cout << leap << '\n';
	
	return 0;
}
