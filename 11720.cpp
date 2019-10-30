// https://www.acmicpc.net/problem/11720

#include <iostream>
using namespace std;

int main() {
	int n;
	int sum = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.length(); i++) sum += s.at(i) - '0';
	cout << sum << '\n';
	return 0;
}
