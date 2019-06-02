// Switch case

#include <stdio.h>

int main ()
{
	int note;
	
	printf("\nBitte geben Sie ihre Note (1-6) ein\n");
	scanf("%i",&note);											//der Adressoperator ist wichtig! Sonst st�rzt das Programm ab.

	switch(note)
	{
		case 1:printf("\nDas ist eine sehr gute Leistung");
				break;											//break ist notwendig, sonst l�uft der alles nach dem ersten True-Wert durch.
		case 2:printf("\nDas ist eine gute Leistung");
				break;
		case 3:printf("\nDas ist eine befriedigende Leistung");
				break;
		case 4:printf("\nDas ist eine ausreichende Leistung");
				break;
		case 5:printf("\nDas ist eine mangelhafte Leistung");
				break;
		case 6:printf("\nDas ist eine ungenuegende Leistung");
				break;
		default:printf("\nDas ist nicht bewertbar"); 			//else Zweig
	}
	
	return 0;
}
