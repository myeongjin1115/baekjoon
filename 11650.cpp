// https://www.acmicpc.net/problem/11650

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<pair<int, int> > v;
	int N, x, y;
	
	cin >> N;
	while(N--) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) cout << v[i].first << ' ' << v[i].second << '\n';
	
	return 0;
}
