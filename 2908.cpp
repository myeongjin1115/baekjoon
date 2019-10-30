// https://www.acmicpc.net/problem/2908

#include <iostream>
using namespace std;

void swap(char arr[]) {
	char tmp;
	tmp = arr[0];
	arr[0] = arr[2];
	arr[2] = tmp;
}

int main() {
	char a[4], b[4];
	
	cin >> a >> b;
	swap(a);
	swap(b);
	
	if (atoi(a) > atoi(b)) cout << a << '\n';
	else cout << b << '\n';
	
	return 0;
}
