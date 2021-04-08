#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b;
	printf("Enter 2 positive integers: ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}

	for (int i = a, c = 0; i <= b; i++) {
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 10 == 0) printf("\n");
		}
	}
	return 0;
}