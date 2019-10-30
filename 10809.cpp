// https://www.acmicpc.net/problem/10809

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	int alpha[26];
	memset(alpha, -1, sizeof(alpha));
	
	cin >> s;
	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (s.at(j) == i && alpha[i - 'a'] == -1) alpha[i - 'a'] = j;
		}
	}
	
	for (int i = 0; i < 26; i++) cout << alpha[i] << ' ';
	cout << '\n';
	return 0;
}
