// https://www.acmicpc.net/problem/10989

#include <iostream>
#include <algorithm>
#define MAX_SIZE 10000 + 1
using namespace std;

int main() {
	int N, inputNum;
	cin >> N;
	int arr[MAX_SIZE] = {0};
	
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	for (int i = 0; i < N; i++) {
		cin >> inputNum;
		arr[inputNum]++;
	}
	for (int i = 1; i <= MAX_SIZE - 1; i++) {
		for (int j = 1; j <= arr[i]; j++) cout << i << '\n';
	}
	
	return 0;
}
