#include <stdio.h>
#include <stdlib.h>

int sudoku[9][9];
int zero_loc[81][2];
int zero_cnt = 0;

void func(int p) {
	int i, j, m, n, sq_m, sq_n;
	int check[10] = {0, };

	if(p == zero_cnt) {
		for(i = 0; i < 9; i++) {
			for(j = 0; j < 9; j++) printf("%d ", sudoku[i][j]);
			printf("\n");
		}
		exit(0);
	}

	for(i = 0; i < 9; i++) {
		check[sudoku[zero_loc[p][0]][i]] = 1;
		check[sudoku[i][zero_loc[p][1]]] = 1;
	}
	sq_m = zero_loc[p][0] / 3 * 3;
	sq_n = zero_loc[p][1] / 3 * 3;
	for(m = sq_m; m < sq_m + 3; m++) {
		for(n = sq_n; n < sq_n + 3; n++) check[sudoku[m][n]] = 1;
	}
	for(i = 1; i <= 9; i++) {
		if(check[i] == 0) {
			sudoku[zero_loc[p][0]][zero_loc[p][1]] = i;
			func(p + 1);
			sudoku[zero_loc[p][0]][zero_loc[p][1]] = 0;
		}
	}
}

int main() {
	int i, j;
	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9; j++) scanf("%d", &sudoku[i][j]);
	}

	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9; j++) {
			if(sudoku[i][j] == 0) {
				zero_loc[zero_cnt][0] = i;
				zero_loc[zero_cnt][1] = j;
				zero_cnt++;
			}
		}
	}
	func(0);

	return 0;
}
