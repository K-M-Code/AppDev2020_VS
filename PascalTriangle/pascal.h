#pragma once


int comb(int n, int m) {
	if (n < m) return 0;
	return fact(n) / (fact(n - m) * fact(m));
}


int get_int(int min, int max) {
	int t;
	do {
		printf("Enter an positive integer \
				between (%d, %d): ", min, max);
		int r = scanf("%d", &t);
		if (r < 1) t = 0;
	} while (t < min || t > max);

	return t;
}

int fact(int n)
{
	int c;
	long result = 1;

	for (c = 1; c <= n; c++)
		result = result * c;

	return (result);
}

void parscal_triangle(int v) {
	int i, j, k;
	for (i = 0; i < v; i++) {

		for (k = 1; k <= v; k++) {
			printf(" ");
		}
		for (j = 0; j <= i; j++) {
			printf("%4d", comb(i, j));
		}
		printf("\n");
	}
}