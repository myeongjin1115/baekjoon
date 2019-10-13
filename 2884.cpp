#include <iostream>
using namespace std;

int main() {
	int hour, min;
	
	cin >> hour >> min;
	
	if (min <= 45) {
		min = min + 60 - 45;
		hour -= 1;
		if (hour < 0) hour += 24;
	}
	else min -= 45;
	
	cout << hour << ' ' << min << endl;
	
	return 0;
}
