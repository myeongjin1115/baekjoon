#include <stdio.h>

int main() {
	int n, i, j, max;
	int input[501][501];
	int F[501][501] = {0};

	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) scanf("%d", &input[i][j]);
	}
	F[1][1] = input[1][1];
	for(i = 2; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			F[i][j] = ((F[i - 1][j - 1] > F[i - 1][j]) ? F[i - 1][j - 1] : F[i - 1][j]) + input[i][j];
		}
	}
	max = F[n][1];
	for(i = 2; i <= n; i++) max = (max < F[n][i]) ? F[n][i] : max;

	printf("%d\n", max);

	return 0;
}
