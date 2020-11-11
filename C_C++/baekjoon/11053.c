#include <stdio.h>

int main() {
	int A[1001];
	int DP[1001];
	int N, i, j, max;

	scanf("%d", &N);
	for(i = 1; i <= N; i++) DP[i] = 1;
	for(i = 1; i <= N; i++) scanf("%d", &A[i]);

	max = 1;
	for(i = 1; i <= N; i++) {
		for(j = 1; j < i; j++) {
			if(A[i] > A[j] && DP[i] < DP[j] + 1) DP[i] = DP[j] + 1;
			if(max < DP[i]) max = DP[i];
		}
	}

	printf("%d\n", max);

	return 0;
}
