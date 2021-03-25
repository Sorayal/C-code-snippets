// Hallo Welt
/* Ein kleines C-Programm,
das eine Ausgabe auf dem 
Bildschirm macht*/

#include<stdio.h>
#include<stdlib.h>

int main ()   								/*Main Funktion, dort startet das Programm*/
{
	char name[20];							/*Variablendeklaration Zeichenkette*/
	printf("Hallo Welt!\n"); 				/*printformatted und Zeilenumbruch*/
	printf("Name eingeben\n");
	gets(name);								/*Variable wird eingelesen*/
	printf("Hallo %s\n",name);
	return 0; 								/* Rückgabewert 0 bedeutet Programm lief reibungslos durch*/
}
