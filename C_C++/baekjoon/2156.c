#include <stdio.h>
#define MAX(a, b) ((a > b) ? a : b)

int main() {
	int n, i;
	int a[10001];
	int DP[10001];

	scanf("%d", &n);
	for(i = 1; i <= n; i++) scanf("%d", &a[i]);

	DP[1] = a[1];
	DP[2] = DP[1] + a[2];
	for(i = 3; i <= n; i++) {
		DP[i] = MAX(MAX(DP[i - 1], DP[i - 2] + a[i]), DP[i - 3] + a[i - 1] + a[i]);
	}

	printf("%d\n", DP[n]);

	return 0;
}
