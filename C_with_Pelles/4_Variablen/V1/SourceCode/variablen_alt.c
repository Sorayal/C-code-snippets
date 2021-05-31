// Variablen und ihre Nutzung

#include <stdio.h>

int main ()
{
	int zahl1,zahl2,ergebnis;
	
	printf("\nBitte geben Sie eine Ganzzahl ein: ");
	//der Adressoperator ist wichtig! Sonst stürzt das Programm ab.
	scanf("%i",&zahl1);										
	
	printf("\nBitte geben Sie eine Ganzzahl ein: ");
	scanf("%i",&zahl2);
	ergebnis=zahl1+zahl2;
	
	 //printf beim Rechnen, + ist ein mathematischer Operator
	printf("\nDas Ergebnis der Berechnung %i + %i = %i",zahl1,zahl2,ergebnis);
	printf("\n"); 
	system("Pause");
	return 0;
}
