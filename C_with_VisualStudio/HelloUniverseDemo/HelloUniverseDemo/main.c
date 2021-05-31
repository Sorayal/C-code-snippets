/*Just a basic demo*/

#include <stdio.h>

void main() {
	printf("Hello Universe\n");
	printf("This demo was made with Visual Studio 2019\n");

	int result = addTwoIntegers(5, 6);
	int length = snprintf(NULL, 0, "%d", result);
	char* resultString = malloc(length + 1);
	snprintf(resultString, length + 1, "%d", result);

	char intro[32] = "\nThe result of 6 + 7 is ";
	strcat(intro, resultString);
	printf(intro);
	printf("\n\n");
	free(resultString);

}

int addTwoIntegers(int a, int b) {
	return a + b;
}
