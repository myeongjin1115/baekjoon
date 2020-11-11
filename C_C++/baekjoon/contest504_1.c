#include <stdio.h>

int main() {
	int i, j, N, K, M, query, l, r, x;
	int cnt = 0;
	int A[250001];
	
	scanf("%d %d", &N, &K);
	for(i = 1; i <= N; i++) scanf("%d", &A[i]);
	scanf("%d", &M);
	for(j = 1; j <= M; j++) {
		scanf("%d", &query);
		switch(query) {
		case 1:
			scanf("%d %d %d", &l, &r, &x);
			for(i = l; i <= r; i++) A[i] |= x;
			break;
		case 2:
			scanf("%d %d", &l, &r);
			for(i = l; i <= r; i++) {
				if(A[i] == K) cnt++;
			}
			printf("%d\n", cnt);
			cnt = 0;	
			break;
		}
	}

	return 0;
}
