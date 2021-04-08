#include "score.h"

void input_scores(int scores[]) {
	int i, input = 0, temp = 0;

	// using a sentinel-controlled loop to get input

	printf("Enter scores, -1 to end:\n");
	for (i = 0; i < MAX && input != -1; i++) {
		printf("score %d: ", i+1);
		scanf("%d", &input);
		if (input > 100 || input < -1) {
			printf("Invalid Score Value! \n");
		} else {
			scores[i] = input;
		}
	}
}