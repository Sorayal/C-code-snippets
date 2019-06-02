/*Funktionen */
#include <stdio.h>
void strich(int,char); 					//Funktionsprototyp mit zwei Parametern

int main()
{
	int i = 100;
	printf("%d\n",i);					//Dies dient dazu, zu zeigen, dass die Funktionsvariablen lokal bleiben und nicht die Variablen des Programms überschreiben.
	printf("das ist Zeile 1.");
	strich(10,'-'); 					//(innerhalb der Klammer wird der Wert für die Länge des Strichs angegeben.
	printf("das ist Zeile 2.");
	strich(20,'*');
	printf("das ist Zeile 3.");	
	strich(15,'~');
	printf("das ist Zeile 4.");	
	strich(40,'+');
	printf("%d\n",i);
	return 0;
}

void strich(int laenge, char zeichen) 	//Funktion gibt nichts zurück, void , die Variablen sind lokal an die Funktionen gebunden
{
	int i;
	printf("\n");
	for(i=1;i<=laenge;i++)
	{
			printf("%c",zeichen);
	}

	printf("\n");
}
