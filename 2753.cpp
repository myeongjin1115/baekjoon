#include <iostream>
using namespace std;

int main() {
	int year;
	int flag = 0;
	
	cin >> year;
	
	if (year % 4 == 0) {
		flag = 1;
		if (year % 100 == 0) {
			if (year % 400 == 0) flag = 1;
			else flag = 0;
		}
	}
	
	if (flag) cout << '1' << endl;
	else cout << '0' << endl;
	
	return 0;
}
