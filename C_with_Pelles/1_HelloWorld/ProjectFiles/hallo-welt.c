// Hallo Welt
/* Ein kleines C-Programm,
das eine Ausgabe auf dem 
Bildschirm macht*/

#include<stdio.h>

/*Main Funktion, dort startet das Programm*/
int main ()   								
{	
	/*printformatted und Zeilenumbruch*/
	printf("Hallo Welt!\n"); 
	
	/*H�lt die Konsole offen, bis eine Taste gedr�ckt wurde */
	getchar();
	/* R�ckgabewert 0 bedeutet Programm lief reibungslos durch*/				
	return 0; 								
}
