#include <stdio.h>

int main() {
	int N, i;
	int DP[1000001];

	scanf("%d", &N);

	DP[1] = 0;
	DP[2] = DP[3] = 1;
	for(i = 4; i <= 1000000; i++) {
		DP[i] = DP[i - 1] + 1;
		if(!(i % 2)) DP[i] = ((DP[i - 1] < DP[i / 2]) ? DP[i - 1] : DP[i / 2]) + 1;
		if(!(i % 3)) DP[i] = ((DP[i - 1] < DP[i / 3]) ? DP[i - 1] : DP[i / 3]) + 1;
	}

	printf("%d\n", DP[N]);

	return 0;
}
