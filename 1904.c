#include <stdio.h>

int main() {
	int i;
	int N;
	int F[1000001];
	F[1] = 1;
	F[2] = 2;
	for(i = 3; i <= 1000000; i++) {
		F[i] = (F[i - 1] + F[i - 2]) % 15746;
	}

	scanf("%d", &N);

	printf("%d\n", F[N]);

	return 0;
}
