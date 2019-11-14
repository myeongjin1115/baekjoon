// https://www.acmicpc.net/problem/1193

#include <iostream>
using namespace std;

int main() {
	int x, t1, t2;
	int i = 1;
	
	cin >> x;
	
	while (x > i * (i - 1) / 2) i++;
	t2 = i * (i - 1) / 2 - x + 1;
	t1 = i - t2;
	if (i % 2) cout << t1 << '/' << t2 << '\n';
	else cout << t2 << '/' << t1 << '\n';
}
