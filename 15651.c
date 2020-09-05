#include <stdio.h>

int M, N;
int MAX_SIZE = 7 + 1;
int arr[8];

void func(int cnt) {
	int i;

	if(cnt == M) {
		for(i = 0; i < M; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}

	for(i = 1; i <= N; i++) {
		arr[cnt] = i;
		func(cnt + 1);
	}	
}

int main() {
	scanf("%d %d", &N, &M);

	func(0);

	return 0;
}
