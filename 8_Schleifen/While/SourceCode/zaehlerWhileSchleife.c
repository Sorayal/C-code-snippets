/* While Schleife und Do-While*/
/* Kopfgesteuert vs fussgesteuert */
#include <stdio.h>

int main(void)
{
	int zaehler = 0;
	while(zaehler<10)
	{
		printf("\n%d",zaehler);
		zaehler++;
	}

	do{
		printf("\n%d",zaehler);
		zaehler--;
	}while(zaehler>=0);

	printf("\n");
	system("Pause");
	return 0;
}
