/*Lottoprogramm Bubblesort*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i,elemente,gefunden=0, zufall;
	//Array 50 Felder
	char lotto[50];  							
	elemente = sizeof(lotto)/sizeof(char);
	srand(time(NULL));
	
	/*Initalisieren des Arrays*/
	for(i=0;i<elemente;i++)
		lotto[i]=0;
		
	/*Ziehen der Lottozahlen */
	while(gefunden<6)
	{
		//auf 49 begrenzt
		zufall=rand()%49+1;		
		//hier wird wie im Lottoschein geprüft, ob eine Zelle mit 0 belegt ist und wird dann mit 1 markiert, bis 6 Zahlen markiert wurden.		
		if(lotto[zufall]==0)					
		{
			gefunden++;
			lotto[zufall]=1;
		}
	}
	
	/*Ausgabe der Lottozahlen*/
	for(i=0;i<elemente;i++)
	{
		if(lotto[i]==1)
			printf("%d  ",i);
	}
									
	printf("\n");
	system("Pause");
	return 0;
}
