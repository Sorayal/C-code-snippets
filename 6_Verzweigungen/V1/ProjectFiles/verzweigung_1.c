// Variablen und ihre Nutzung

#include <stdio.h>

int main ()
{
	int zahl1,zahl2,ergebnis;
	
	printf("\nBitte geben Sie eine Ganzzahl ein: ");
	//der Adressoperator ist wichtig! Sonst st�rzt das Programm ab.
	scanf("%i",&zahl1);										
	
	printf("\nBitte geben Sie eine Ganzzahl ein: ");
	scanf("%i",&zahl2);
	//Boolean Wert True oder False Bedingungsverzweigung, die Klammern umfassen den gesamten Pfad f�r die Bedingung.
	if(zahl1 < zahl2)										
	{
		printf("\nDie erste Zahl ist kleiner");  
		printf("\nDas stimmt so");
	}
	// Zweite Bedingungsabfrage. Im Nassim-Schneiderman Diagramm wird im Nein-Pfad eine weitere Abfrage gestartet. Verschachtelte If-Bedingungen.
	else if(zahl1>zahl2)									
	{
		printf("\nDie zweite Zahl ist kleiner");  
	}
	else
	{
		printf("\nDie Zahlen sind gleich gross");
	}  
	

	printf("\n");
	system("Pause");
	return 0;
}
