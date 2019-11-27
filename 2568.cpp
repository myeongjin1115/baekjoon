// https://www.acmicpc.net/problem/7568

#include <iostream>
using namespace std;

typedef struct Big {
	int x;
	int y;
}Big;

int main() {
	int N, rank;
	cin >> N;
	
	Big b[N];
	for(int i = 0; i < N; i++) {
		cin >> b[i].x >> b[i].y;
	}
	for(int i = 0; i < N; i++) {
		rank = 1;
		for (int j = 0; j < N; j++) {
			if (i == j) continue;
			else if (b[i].x < b[j].x && b[i].y < b[j].y) rank++;
		}
		cout << rank << ' ';
	}
	cout << '\n';
	
	return 0;
}
