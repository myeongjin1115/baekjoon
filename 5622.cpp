// https://www.acmicpc.net/problem/5622

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char buffer[16];
	int len;
	int time = 0;
	
	cin >> buffer;
	
	len = strlen(buffer);
	for (int i = 0; i < len; i++) {
		switch(buffer[i]) {
		case 'A':
		case 'B':
		case 'C':
			time += 3;
			break;
		case 'D':
		case 'E':
		case 'F':
			time += 4;
			break;
		case 'G':
		case 'H':
		case 'I':
			time += 5;
			break;
		case 'J':
		case 'K':
		case 'L':
			time += 6;
			break;
		case 'M':
		case 'N':
		case 'O':
			time += 7;
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			time += 8;
			break;
		case 'T':
		case 'U':
		case 'V':
			time += 9;
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			time += 10;
			break;
		}
	}
	cout << time << '\n';
	
	return 0;
}
