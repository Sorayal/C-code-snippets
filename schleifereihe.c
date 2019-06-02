#include <stdio.h>

int main()
{
	int i, j;

// Schleife fuer die Zeilen
for(i=0; i<50; i++) {
	printf("\nZeile %2d: ", i+1);

	// Schleife fuer die Spalten
	for(j=0; j<=i; j++) {
		printf("*");
	}
}

printf("\n");

return 0;
}
