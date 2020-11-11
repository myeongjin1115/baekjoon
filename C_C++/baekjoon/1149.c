#include <stdio.h>

int main() {
	int i, j, N, minimum;
	int input[1000][3];
	int F[1000][3];
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		for(j = 0; j < 3; j++) scanf("%d", &input[i][j]);
	}

	for(i = 0; i < 3; i++) F[0][i] = input[0][i];

	for(i = 1; i < N; i++) {
		F[i][0] = (F[i - 1][1] < F[i - 1][2] ? F[i - 1][1] : F[i - 1][2]) + input[i][0];
		F[i][1] = (F[i - 1][0] < F[i - 1][2] ? F[i - 1][0] : F[i - 1][2]) + input[i][1];
		F[i][2] = (F[i - 1][0] < F[i - 1][1] ? F[i - 1][0] : F[i - 1][1]) + input[i][2];
	}

	minimum = F[N - 1][0];
	if(minimum > F[N - 1][1]) minimum = F[N - 1][1];
	if(minimum > F[N - 1][2]) minimum = F[N - 1][2];
	printf("%d\n", minimum);

	return 0;
}
