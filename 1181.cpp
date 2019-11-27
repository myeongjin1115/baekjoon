// https://www.acmicpc.net/problem/1181

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool compare(string s1, string s2) {
	if (s1.length() == s2.length()) return s1 < s2;
	return s1.length() < s2.length();
}

int main() {
	vector<string> v;
	int N;
	string s;
	
	cin >> N;
	while(N--) {
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), compare);
	cout << v[0] << '\n';
	s = v[0];
	for (int i = 1; i < v.size(); i++) {
		if (s == v[i]) continue;
		cout << v[i] << '\n';
		s = v[i];
	}
	
	return 0;
}
