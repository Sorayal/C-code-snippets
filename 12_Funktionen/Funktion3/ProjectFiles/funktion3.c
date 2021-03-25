/*Funktionen */
#include <stdio.h>
//Funktionsprototyp mit zwei Parametern
void strich(int,char); 					

int main()
{
	int i = 100;
	//Dies dient dazu, zu zeigen, dass die Funktionsvariablen lokal bleiben und nicht die Variablen des Programms überschreiben.
	printf("%d\n",i);					
	printf("das ist Zeile 1.");
	//(innerhalb der Klammer wird der Wert für die Länge des Strichs angegeben.
	strich(10,'-'); 					
	printf("das ist Zeile 2.");
	strich(20,'*');
	printf("das ist Zeile 3.");	
	strich(15,'~');
	printf("das ist Zeile 4.");	
	strich(40,'+');
	printf("%d\n",i);

	printf("\n");
	system("Pause");
	return 0;
}

//Funktion gibt nichts zurück, void , die Variablen sind lokal an die Funktionen gebunden
void strich(int laenge, char zeichen) 	
{
	int i;
	printf("\n");
	for(i=1;i<=laenge;i++)
	{
			printf("%c",zeichen);
	}

	printf("\n");
}
