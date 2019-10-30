// https://www.acmicpc.net/problem/1152

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char buffer[1000001];
	int count = 0;
	
	cin.getline(buffer, sizeof(buffer), '\n');
	char* cp = strtok(buffer, " ");
	while (cp != NULL) {
		count++;
		cp = strtok(NULL, " ");
	}
	cout << count;
	
	return 0;
}
