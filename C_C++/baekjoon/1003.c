#include <stdio.h>

int main() {
	int i;
	int T, N;
	int zero[41];
	int one[41];
	zero[0] = one[1] = 1;
	zero[1] = one[0] = 0;
	for(i = 2; i <= 40; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}

	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%d %d\n", zero[N], one[N]);
	}

	return 0;
}
