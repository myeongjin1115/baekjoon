#include <stdio.h>

int main() {
	int n, i;
	int input[301];
	int F[301][3];

	scanf("%d", &n);
	for(i = 1; i <= n; i++) scanf("%d", &input[i]);

	F[0][1] = F[0][2] = F[1][2] = 0;
	F[1][1] = input[1];
	for(i = 2; i <= n; i++) {
		F[i][1] = ((F[i - 2][1] > F[i - 2][2]) ? F[i - 2][1] : F[i - 2][2]) + input[i];
		F[i][2] = F[i - 1][1] + input[i];
	}

	printf("%d\n", (F[n][1] > F[n][2]) ? F[n][1] : F[n][2]);

	return 0;
}
