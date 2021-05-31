/*Ratespiel*/

#include<stdio.h>
#include <stdlib.h>  	
#include <time.h>

int main()
{
	int wuerfel, eingabe, i;
	
	//Zufallsgenerator initialisieren
	srand(time(NULL));	
	//Zufallszahl zwischen 1 und 100 würfeln	
	wuerfel=rand()%100+1;  	
	i=0;
		
	do
	{
	printf("\nBitte geben Sie eine Ganzzahl ein: ");
	scanf("%i",&eingabe);

	
		if(eingabe<wuerfel)
		{
			printf("Ihre Zahl ist niedriger als die gesuchte Zahl.");
			i++;
		}
		else if(eingabe>wuerfel)
		{
			printf("Ihre Zahl ist hoeher als die gesuchte Zahl.");
			i++;
		}
		else if(eingabe==wuerfel)
			printf("Sie haben gewonnen.\n");
		
	}
	
	//Immer die Laufbedingung
	while (eingabe != wuerfel && i<8);  

	if (i==8)
	{
	
	printf("\nSie haben verloren.\n");
	}
	
	system("Pause");
	return 0;
}

