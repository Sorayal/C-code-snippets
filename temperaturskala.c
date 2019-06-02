#include <stdio.h>

int main()
{
	int i,fahrenheit;
	for(i=-20;i<=120;i=i+10)									//i ist Laufindex und Grad Celsius zugleich.
		{
			fahrenheit = i*1.8+32;
			printf("\n%3i %cC sind %3i %cF",i,248,fahrenheit,248);   // Formatierte Ausgabe Grad Celsius Grad Fahrenheit. Der Code 248 gibt den kleinen Kreis aus.
			if(i==0)												 //mit %3i oder %10c kann man angeben, wie gross das Feld werden soll. Leerstellen werden bei Ausgabe mit Leerzeichen aufgefüllt.
			{
				printf("\tGefrierpunkt");
			}
			else if (i==100)										 //zwei If-Bedingungen wären besser, da damit die vollständige Bedingungsprüfung vermieden wird.
			{
				printf("\tSiedepunkt");
			}
		}
	return 0;
}
