// https://www.acmicpc.net/problem/2577

#include <iostream>
using namespace std;

int main() {
	int a, b, c, mul, temp;
	int num[10] = { 0 };
	
	cin >> a >> b >> c;
	mul = a * b * c;
	
	do {
		temp = mul % 10;
		mul /= 10;
		num[temp]++;
	} while (mul > 10);
	num[mul]++;
	
	for (int i = 0; i < 10; i++) cout << num[i] << '\n';
	
	return 0;
}
