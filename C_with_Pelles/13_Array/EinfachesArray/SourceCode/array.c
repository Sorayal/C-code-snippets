/* Arrays */

#include <stdio.h>

int main ()
{
	int i,elemente;
/*	int zahlen[7];					//Array für 7 Integerzahlen
	zahlen[0]=24;
	zahlen[1]=33;
	zahlen[2]=100;
	zahlen[3]=64;
	zahlen[4]=99;
	zahlen[5]=12;
	zahlen[6]=9999;*/
	
	//Kurzform einer Arraydeklaration.
	int zahlen[] = {24,33,100,64,99,12,9999};
	   

	printf("Das Array ist %d Byte gross\n",sizeof(zahlen));
	printf("Ein Arrayelement ist %d Byte gross\n",sizeof(int));
	printf("Das Array hat also %d Elemente\n",sizeof(zahlen)/sizeof(int));
	
	printf("-----------------------\n");
	//3.Box des Arrays, Variablencontainer
	//printf("%i\n",zahlen[3]);													
	printf("Das Arrayelement mit dem Index 3 hat den Wert %d\n",zahlen[3]);
	zahlen[3] = 65;
	printf("Das Arrayelement mit dem Index 3 hat nach Neuzuweisung mit 65 den Wert %d\n",zahlen[3]);
	
	printf("-----------------------\n");
	//Beim Auslesen kann man auch zuviel auslesen(out of bound) und bekommt zufällige Werte aus dem Hauptspeicher geliefert.
	printf("Das Basis Array enthaelt folgende Elemente:\n");
	elemente = sizeof(zahlen)/sizeof(int);										
	for(i=0;i<elemente;i++)
	{
		printf("%d\n",zahlen[i]);
	}
	
	printf("\n");
	system("Pause");					
	return 0;
}
