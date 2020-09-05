#include <stdio.h>

int M, N;
int MAX_SIZE = 8 + 1;
int arr[9];

void func(int cnt) {
	int i;

	if(cnt - 1 == M) {
		for(i = 1; i <= M; i++) printf("%d ", arr[i]);
		printf("\n");
		return;
	}

	for(i = 1; i <= N; i++) {
		arr[cnt] = i;
		if(arr[cnt] < arr[cnt - 1]) continue;
		func(cnt + 1);
	}	
}

int main() {
	int i;
	for(i = 0; i < MAX_SIZE; i++) arr[i] = 0;
	scanf("%d %d", &N, &M);

	func(1);

	return 0;
}
