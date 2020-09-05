#include <stdio.h>

int main() {
	int i;
	int T, N;
	long P[101];
	P[1] = P[2] = P[3] = 1;
	P[4] = P[5] = 2;
	P[6] = 3;
	P[7] = 4;
	P[8] = 5;
	P[9] = 7;
	P[10] = 9;
	for(i = 11; i <= 100; i++) P[i] = P[i - 1] + P[i - 5];

	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		printf("%ld\n", P[N]);
	}

	return 0;
}
