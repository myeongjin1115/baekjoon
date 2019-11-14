// https://www.acmicpc.net/problem/2292

#include <iostream>
using namespace std;

int main() {
	int n;
	int i = 1;
	
	cin >> n;
	
	while(n > 1 + 6 * (i * (i - 1) / 2)) i++;
	
	cout << i << '\n';
	
	return 0;
}
