/*Ratespiel mit begrenzten Versuche und Abfrage*/

#include<stdio.h>
#include <stdlib.h>  	
#include <time.h>

int main()
{
char taste;
	
do{


	int wuerfel, eingabe, i;
	
	srand(time(NULL));		//Zufallsgenerator initialisieren
	wuerfel=rand()%100+1;  	//Zufallszahl zwischen 1 und 100 würfeln
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
		{
			printf("Sie haben gewonnen.\n");
			printf("\nSie haben die Zahl  %d mit  %d Versuchen gefunden.",wuerfel,i);
		}
	}
	
	
	while (eingabe != wuerfel && i<8);  //Immer die Laufbedingung

	if (i==8)
	{
	
	printf("\nSie haben verloren.\n");
	printf("\nSie haben die Zahl  %d mit  %d Versuchen nicht gefunden.",wuerfel,i);
	
	}
	fflush (stdin);
	printf("\nWollen Sie noch einmal?? Fuer Abbruch n druecken.");
	scanf("%c",&taste);
	
	
}
while (taste !='n');

return 0;
}
