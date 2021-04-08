#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "pascal.h"
#define MIN 3
#define MAX 20
void parscal_triangle(int i);
int get_int(int, int);
int comb(int, int);
int fact(int);

int main() {
	int a;

	a = get_int(MIN, MAX);

	parscal_triangle(a);

	return 0;
}
