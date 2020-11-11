#include <stdio.h>
#include <stdlib.h>

int N, MAX_SIZE, minimum;
int flag = 0;
int S[21][21];
int visited[21];

void func(int cnt, int p) {
	int i, j, tmp;
	int start = 0;
	int list = 0;
	if(cnt == MAX_SIZE) {
		for(i = 1; i <= N - 1; i++) {
			for(j = i + 1; j <= N; j++) {
				if(visited[i] && visited[j]) start += S[i][j] + S[j][i];
				else if(!visited[i] && !visited[j]) list += S[i][j] + S[j][i];
			}
		}
		tmp = abs(start - list);
		if(flag == 0) {
			minimum = tmp;
			flag = 1;
		} else if(minimum > tmp) minimum = tmp;
	} else {
		for(i = p; i <= N; i++) {
			if(!visited[i]) {
				visited[i] = 1;
				func(cnt + 1, i + 1);
				visited[i] = 0;
			}
		}
	}
}

int main() {
	int i, j;
	scanf("%d", &N);
	MAX_SIZE = N / 2;
	for(i = 1; i <= N; i++) {
		for(j = 1; j <= N; j++) scanf("%d", &S[i][j]);
	}

	func(0, 1);

	printf("%d\n", minimum);

	return 0;
}
