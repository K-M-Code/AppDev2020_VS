
#include <stdio.h>

// This program will take two positive integers from use and
// print out all the numbers which are divisible by 3 between these 2 numbers

int main(void) {
	int a, b;
	printf("Enter two positive numbers: ");
	scanf_s("%d%d", &a, &b);

	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a, c = 0; i <= b; i++)
	{
		if (i % 3 == 0) {
			printf("%6d", i);
			c++;
			if (c % 5 == 0) {
				printf("\n");
			}
		}
	}
}