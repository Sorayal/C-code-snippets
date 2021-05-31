// Hallo Welt
/* Ein kleines C-Programm,
das eine Ausgabe auf dem 
Bildschirm macht*/

#include<stdio.h>


/*Main Funktion, dort startet das Programm. Integer Ganzzahl*/
int main ()   										
{
	/*printformatted und Zeilenumbruch. Funktion aus der stdio-Library*/
	printf("Hallo Welt!\n"); 

	/*l�ngerer Stringtext Umbr�che werden �ber Backslash zusammengehalten*/						
	printf("dies ist ein langer Text, der \
	ueber mehrere Zeilen geht.");	
					
	printf("\nEin akustisches Signal (\\a) \a");
	printf("\nEin Backspace(\\b) \b");
	
	/*2 Tabspr�nge*/
	printf("\nEin Tabsprung(\\t) \txyz \tabcdef"); 
	
	/*Die Anf�hrungszeichen werden auch mit dem Escapezeichen \ ausgeschrieben*/	
	printf("\nEr nannte sie \"Meine Liebste\"");	

	/* Systembefehl f�r Systempause. Vordefinierte Stringkette */
	//system("pause");

	/* H�lt die Konsole offen, bis eine Taste gedr�ckt wurde */
	getchar();		

	/* R�ckgabewert 0 bedeutet Programm lief reibungslos durch*/								
	return 0; 							
}
