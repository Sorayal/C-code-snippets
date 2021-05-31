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

	/*längerer Stringtext Umbrüche werden über Backslash zusammengehalten*/						
	printf("dies ist ein langer Text, der \
	ueber mehrere Zeilen geht.");	
					
	printf("\nEin akustisches Signal (\\a) \a");
	printf("\nEin Backspace(\\b) \b");
	
	/*2 Tabsprünge*/
	printf("\nEin Tabsprung(\\t) \txyz \tabcdef"); 
	
	/*Die Anführungszeichen werden auch mit dem Escapezeichen \ ausgeschrieben*/	
	printf("\nEr nannte sie \"Meine Liebste\"");	

	/* Systembefehl für Systempause. Vordefinierte Stringkette */
	//system("pause");

	/* Hält die Konsole offen, bis eine Taste gedrückt wurde */
	getchar();		

	/* Rückgabewert 0 bedeutet Programm lief reibungslos durch*/								
	return 0; 							
}
