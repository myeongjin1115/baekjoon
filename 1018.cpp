// https://www.acmicpc.net/problem/1018

#include <iostream>
using namespace std;

int main() {
	int M, N, firstB, firstW;
	int min = 32;
	cin >> M >> N;
	char board[M][N + 1];
	for (int i = 0; i < M; i++) {
		cin >> board[i];
	}
	
	for (int i = 0; i <= M - 8; i++) {
		for (int j = 0; j <= N - 8; j++) {
			firstB = firstW = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if (((k - i) % 2 == 0 && (l - j) % 2 == 0) ||
						((k - i) % 2 == 1 && (l - j) % 2 == 1)) {
						if (board[k][l] == 'B') firstB++;
						else if (board[k][l] == 'W') firstW++;
					}
					else if (((k - i) % 2 == 0 && (l - j) % 2 == 1) ||
							((k - i) % 2 == 1 && (l - j) % 2 == 0)) {
						if (board[k][l] == 'B') firstW++;
						else if (board[k][l] == 'W') firstB++;
					}
				}
			}
			
			if (min > 64 - firstB) min = 64 - firstB;
			if (min > 64 - firstW) min = 64 - firstW;
		}
	}
	
	cout << min << '\n';
	
	return 0;
}
