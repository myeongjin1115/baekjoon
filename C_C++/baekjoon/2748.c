#include <stdio.h>

int main() {
	int n, i;
	long F[91];
	F[0] = 0;
	F[1] = 1;
	for(i = 2; i <= 90; i++) F[i] = F[i - 1] + F[i - 2];

	scanf("%d", &n);

	printf("%ld\n", F[n]);

	return 0;
}
