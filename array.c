/* Arrays */

#include <stdio.h>

int main ()
{
	int i,elemente;
/*	int zahlen[7];					//Array fuer 7 Integerzahlen / array for 7 integer numbers
	zahlen[0]=24;
	zahlen[1]=33;
	zahlen[2]=100;
	zahlen[3]=64;
	zahlen[4]=99;
	zahlen[5]=12;
	zahlen[6]=9999;*/
	
	int zahlen[] = {24,33,100,64,99,12,9999};   //Kurzform einer Arraydeklaration. / short array declaration 

	printf("Das Array ist %d Byte gross\n",sizeof(zahlen));
	printf("Ein Arrayelement ist %d Byte gross\n",sizeof(int));
	printf("Das Array hat also %d Elemente\n",sizeof(zahlen)/sizeof(int));
	
	printf("%i\n",zahlen[3]);													//3.Box des Arrays, Variablencontainer / Getting the forth number, as array index starts with zero 
	printf("Das Arrayelement mit dem Index 3 hat den Wert %d\n",zahlen[3]);
	zahlen[3] = 65;
	printf("Das Arrayelement mit dem Index 3 hat den Wert %d\n",zahlen[3]);

	elemente = sizeof(zahlen)/sizeof(int);										//Beim Auslesen kann man auch zuviel auslesen und bekommt zufaellige Werte aus dem Hauptspeicher geliefert.
																				// To prevent to read out of the array boundaries which would give only random numbers. 
	for(i=0;i<elemente;i++)	
	{
		printf("%d\n",zahlen[i]);
	}
						
	return 0;
}
