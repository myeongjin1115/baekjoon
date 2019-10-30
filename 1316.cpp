// https://www.acmicpc.net/problem/1316

#include <iostream>
#include <cstring>
using namespace std;

bool isWord(char buffer[]) {
	char alpha[26] = { 0 };
	char tmp = buffer[0];
	alpha[tmp - 'a']++;
	int len = strlen(buffer);
	for (int i = 1; i < len; i++) {
		if (tmp == buffer[i]) continue;
		alpha[buffer[i] - 'a']++;
		tmp = buffer[i];
	}
	
	for (int i = 0; i < 26; i++) {
		if (alpha[i] > 1) return false;
	}
	return true;
}

int main() {
	int n;
	char buffer[101];
	int count = 0;
	
	cin >> n;
	while(n--) {
		cin >> buffer;
		if (isWord(buffer)) count++;
	}
	cout << count << '\n';
	
	return 0;
}
