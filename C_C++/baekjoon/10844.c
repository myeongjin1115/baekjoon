#include <stdio.h>

int main() {
	int N, i, j;
	int sum = 0;
	int DP[101][10];

	scanf("%d", &N);

	DP[1][0] = 0;
	for(i = 1; i < 10; i++) DP[1][i] = 1;

	for(i = 2; i <= 100; i++) {
		for(j = 0; j < 10; j++) {
			if(j - 1 < 0) DP[i][j] = DP[i - 1][j + 1];
			else if(j + 1 >= 10) DP[i][j] = DP[i - 1][j - 1];
			else DP[i][j] = (DP[i - 1][j - 1] + DP[i - 1][j + 1]) % 1000000000;
		}
	}

	for(i = 0; i < 10; i++) sum = (sum + DP[N][i]) % 1000000000;
	printf("%d\n", sum);

	return 0;
}
