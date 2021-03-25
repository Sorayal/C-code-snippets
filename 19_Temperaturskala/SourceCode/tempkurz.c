#include <stdio.h>

int main()
{
	int i,fahrenheit;
	//i ist Laufindex und Grad Celsius zugleich.
	for(i=-20;i<=120;i=i+10)									
		{
			// Formatierte Ausgabe Grad Celsius Grad Fahrenheit. Der Code 248 gibt den kleinen Kreis aus.
			fahrenheit = i*1.8+32;
			printf("\n%3i %cC sind %3i %cF",i,248,fahrenheit,248);   
			//mit %3i oder %10c kann man angeben, wie gross das Feld werden soll. Leerstellen werden bei Ausgabe mit Leerzeichen aufgefüllt.
			(i==0) ? printf("  Gefrierpunkt") : (i==100) ? printf("  Siedepunkt") : printf("");		
		}
	printf("\n");
	system("Pause");
	return 0;
}
