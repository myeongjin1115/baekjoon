#include <stdio.h>

int main() {
	int A[1001];
	int DP1[1001];
	int DP2[1001];
	int N, i, j;
	int max = 1;

	scanf("%d", &N);
	for(i = 1; i <= N; i++) DP1[i] = DP2[i] = 1;
	for(i = 1; i <= N; i++) scanf("%d", &A[i]);

	for(i = 1; i <= N; i++) {
		for(j = 1; j < i; j++) {
			if(A[i] > A[j] && DP1[i] < DP1[j] + 1) DP1[i] = DP1[j] + 1;
		}
	}
	for(i = N; i >= 1; i--) {
		for(j = N; j > i; j--) {
			if(A[i] > A[j] && DP2[i] < DP2[j] + 1) DP2[i] = DP2[i] + 1;
		}
	}

	for(i = 1; i <= N; i++) {
		if(max < DP1[i] + DP2[i] - 1) max = DP1[i] + DP2[i] - 1;
	}

	printf("%d\n", max);

	return 0;
}
