/*Funktionen */
#include <stdio.h>
//Funktionsprototyp, muss vorher bekannt sein. Kann nicht nach main eingef�hrt werden.
void strich(int); 					

int main()
{
	printf("das ist Zeile 1.");
	//(innerhalb der Klammer wird der Wert f�r die L�nge des Strichs angegeben.
	strich(10); 					
	printf("das ist Zeile 2.");
	strich(20);
	printf("das ist Zeile 3.");	
	strich(15);
	printf("das ist Zeile 4.");	
	strich(40);

	printf("\n");
	system("Pause");
	return 0;
}

//Funktion gibt nichts zur�ck, void
void strich(int laenge) 			
{
	int i;
	printf("\n");
	for(i=1;i<=laenge;i++)
	{
			printf("-");
	}

	printf("\n");
}
