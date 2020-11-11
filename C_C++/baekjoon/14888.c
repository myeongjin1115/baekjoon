#include <stdio.h>

int N;
int seq[11];
int op[4];
int max = -1000000000;
int min = 1000000000;

void func(int p, int arg) {
	int tmp;

	if(p == N) {
		if(max < arg) max = arg;
		if(min > arg) min = arg;
		return;
	}

	if(op[0]) {
		op[0]--;
		arg += seq[p];
		func(p + 1, arg);
		arg -= seq[p];
		op[0]++;
	}
	if(op[1]) {
		op[1]--;
		arg -= seq[p];
		func(p + 1, arg);
		arg += seq[p];
		op[1]++;
	}
	if(op[2]) {
		op[2]--;
		tmp = arg;
		arg *= seq[p];
		func(p + 1, arg);
		arg = tmp;
		op[2]++;
	}
	if(op[3]) {
		op[3]--;
		tmp = arg;
		arg /= seq[p];
		func(p + 1, arg);
		arg = arg;
		op[3]++;
	}
}

int main() {
	int i;
	scanf("%d", &N);
	for(i = 0; i < N; i++) scanf("%d", &seq[i]);
	for(i = 0; i < 4; i++) scanf("%d", &op[i]);

	func(1, seq[0]);

	printf("%d\n%d\n", max, min);

	return 0;
}
