// https://www.acmicpc.net/problem/11651

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second < b.second) return true;
	else if (a.second == b.second) {
		return a.first < b.first;
	}
	return false;
}

int main() {
	vector<pair<int, int> > v;
	int N, x, y;
	
	cin >> N;
	while(N--) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) cout << v[i].first << ' ' << v[i].second << '\n';
	
	return 0;
}
