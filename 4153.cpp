// https://www.acmicpc.net/problem/4153

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int buffer[3];
	
	while (true) {
		for (int i = 0; i < 3; i++) cin >> buffer[i];
		if (buffer[0] == 0 && buffer[1] == 0 && buffer[2] == 0) break;
		sort(buffer, buffer + 3);
		if (pow(buffer[0], 2) + pow(buffer[1], 2) == pow(buffer[2], 2)) cout << "right\n";
		else cout << "wrong\n";
	}
	
	return 0;
}
