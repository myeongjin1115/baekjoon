// https://www.acmicpc.net/problem/3009

#include <iostream>
using namespace std;

typedef struct Location {
	int x;
	int y;
} Location;

int main() {
	Location arr[4];
	bool isSameX, isSameY;
	
	for (int i = 0; i < 3; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;
	}
	for (int i = 0; i < 3; i++) {
		isSameX = isSameY = false;
		for (int j = 0; j < 3; j++) {
			if (i == j) continue;
			if (arr[i].x == arr[j].x) isSameX = true;
			if (arr[i].y == arr[j].y) isSameY = true;
		}
		if (!isSameX) arr[3].x = arr[i].x;
		if (!isSameY) arr[3].y = arr[i].y;
	}
	
	cout << arr[3].x << ' ' << arr[3].y << '\n';
	
	return 0;
}
