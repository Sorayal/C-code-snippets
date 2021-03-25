//Zeichencodes

#include <stdio.h>

int main()
{
	printf("Darstellung von Zeilenumbruechen\n");
	printf("Ein Backslash und ein n(\\n)\n");
	printf("Eine hexadezimale Angabe(\\xa)\xa");
	printf("Eine oktale Angabe(\\012)\012");

	/*%c Platzhalter für Character, Zeilenumbruch hat 10, es wird als character formatiert und als Zeichenbruch interpretiert*/
	printf("Eine dezimale Angabe %c",10); 

	/* \0 gilt als Stringterminator. Ab 0 wird nichts mehr gelesen, für den Compiler ist der String beendet.*/
	printf("das wars\0 und hier gehts weiter"); 

	getchar();
	return 0;
}
