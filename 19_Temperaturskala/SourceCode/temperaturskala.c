#include <stdio.h>

int main()
{
	//i ist Laufindex und Grad Celsius zugleich.
	int i;
	float fahrenheit;
	for(i=-20;i<=120;i=i+10)									
		{
			fahrenheit = i*1.8+32;
			// Formatierte Ausgabe Grad Celsius Grad Fahrenheit. Der Code 248 gibt den kleinen Kreis aus.
			printf("\n%3i %cC sind %3g %cF",i,248,fahrenheit,248); 
			//mit %3i oder %10c kann man angeben, wie gross das Feld werden soll. Leerstellen werden bei Ausgabe mit Leerzeichen aufgefüllt.			
			if(i==0)												 
			{
				printf("\tGefrierpunkt");
			}
			//zwei If-Bedingungen wären besser, da damit die vollständige Bedingungsprüfung vermieden wird.
			else if (i==100)										 
			{
				printf("\tSiedepunkt");
			}
		}
	printf("\n");
	system("Pause");
	return 0;
}
