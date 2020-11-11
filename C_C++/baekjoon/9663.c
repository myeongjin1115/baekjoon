#include <stdio.h>
#include <stdlib.h>

int N;
int cnt = 0;
int MAX_SIZE = 15;
int board[15];

int check(int row) {
	int i;
	for(i = 1; i < row; i++) {
		if(board[row] == board[i]) return 0;
		else if(row - i == abs(board[row] - board[i])) return 0;
	}
	return 1;
}

void func(int row) {
	int i;
	if(row > N) cnt++;
	else {
		for(i = 1; i <= N; i++) {
			board[row] = i;
			if(!check(row)) continue;
			else func(row + 1);
		}
	}
}

int main() {
	int i;
	scanf("%d", &N);

	func(1);

	printf("%d\n", cnt);

	return 0;
}
