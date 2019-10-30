// https://www.acmicpc.net/problem/2675

#include <iostream>
using namespace std;

int main() {
	int t, r;
	string s, p;
	
	cin >> t;
	for (int i = 0; i < t; i++) {
		p = "";
		cin >> r >> s;
		for (int j = 0; j < s.length(); j++) {
			for (int k = 0; k < r; k++) {
				p += s.at(j);
			}
		}
		cout << p << '\n';
	}
	
	return 0;
}
