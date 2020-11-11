#include <stdio.h>

int N, M;
int MAX_SIZE = 8 + 1;
int arr[9];
int visited[9];

void Combination(int n, int m) {
	int i = 0;

	if(n == M) {
		while(i < M) printf("%d ", arr[i++]);
		printf("\n");
		return;
	}

	for(i = m; i <= N; i++) {
		if(!visited[i]) {
			visited[i] = 1;
			arr[n] = i;
			Combination(n + 1, i + 1);
			visited[i] = 0;
		}
	}
}

int main() {
	int i = 0;
	while(i < MAX_SIZE) visited[i++] = 0;

	scanf("%d %d", &N, &M);

	Combination(0, 1);

	return 0;
}
