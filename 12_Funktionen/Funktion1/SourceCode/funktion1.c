/*Funktionen */
#include <stdio.h>

/*Funktionsprototyp, diese m�ssen immer zu Anfang dem 
Compiler bekanntgemacht werden! */
void strich(void); 					

int main()
{
	printf("das ist Zeile 1.");
	strich();
	printf("das ist Zeile 2.");
	strich();
	printf("das ist Zeile 3.");	
	strich();
	printf("das ist Zeile 4.");	
	strich();

	printf("\n");
	system("Pause");
	return 0;
}

//Funktion gibt nichts zur�ck, void
void strich() 						
{
	printf("\n");
	printf("------------------");
	printf("\n");
}
