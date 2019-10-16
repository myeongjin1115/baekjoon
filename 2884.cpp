// https://www.acmicpc.net/problem/2884

#include <iostream>
using namespace std;

int main() {
	int hour, minute;
	
	cin >> hour >> minute;
	if (minute - 45 < 0) {
		minute += 60;
		if (hour - 1 < 0) hour += 24;
		hour -= 1;
	}
	minute -= 45;
	
	cout << hour << ' ' << minute << '\n';
	
	return 0;
}
