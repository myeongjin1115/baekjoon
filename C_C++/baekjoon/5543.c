#include <stdio.h>

int main() {
	int burger = 2000, drink = 2000;
	int i = 0;
	int input;

	do {
		scanf("%d", &input);
		if(input < burger) burger = input;
		i++;
	}while(i < 3);

	for(i = 0; i < 2; i++) {
		scanf("%d", &input);
		if(input < drink) drink = input;
	}

	printf("%d", burger + drink - 50);

	return 0;
}
