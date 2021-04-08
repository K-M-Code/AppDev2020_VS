#include "appdev.h"

int main(void) {
	rock r;
	printf("Application Developers Rock!\n");
	printf("Enter Rocker's Name: ");
	scanf_s("%s", r.name, (unsigned) _countof(r.name));
	srand(time(NULL));
	r.max = rand() % 50 + 51;
	r.min = rand() % 50 + 1;
	send_data(r);
	printf("Rock 'n' Roll");
	return 0;

}