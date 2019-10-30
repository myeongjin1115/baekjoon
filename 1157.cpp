// https://www.acmicpc.net/problem/1157

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char buffer[1000001];
	int alpha[26] = {0};
	int len;
	int index = 0, max = 0;
	bool flag = false;
	
	cin >> buffer;
	len = strlen(buffer);
	for (int i = 0; i < len; i++) {
		if (buffer[i] >= 'a' && buffer[i] <= 'z') buffer[i] -= 'a' - 'A';
		alpha[buffer[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			index = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == alpha[i] && i != index) flag = true;
	}
	if (flag) cout << '?' << '\n';
	else cout << (char)('A' + index) << '\n';
	
	return 0;
}
