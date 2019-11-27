// https://www.acmicpc.net/problem/1436

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int N;
	int arr[10001];
	char tmp[100];
	int num = 0;
	char *cp;
	
	for (int i = 0; i < 10001; i++) {
		while (true) {
			sprintf(tmp, "%d", num);
			if((cp = strstr(tmp, "666")) == NULL) {
				num++;
				continue;
			}
			else break;
		}
		arr[i] = num++;
	}
	
	cin >> N;
	cout << arr[N - 1] << '\n';
	
	return 0;
} 
