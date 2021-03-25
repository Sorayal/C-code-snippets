/*Pyramide aus Kreuzen mit verschachtelten For-Schleifen*/
#include<stdio.h>

int main()
{
	//m = aktuelle Hoehe bzw. Zeile , i= Laufvariable zweite Schleife
    int hoehe,m,spacer,cross,i;                     

    printf("Pyramidenzeichnung\n");
    printf("Bitte Hoehe als Ganzzahl eingeben (ab Hoehe 0): ");
	//Einlesen der gewuenschten Hoehe. Mit Minuswerten bzw. mit Hoehe 0 zeichnet das Programm keine Pyramide.
    scanf("%d",&hoehe);  

	//Zwei Zeilenumbrueche                           
    printf("\n\n"); 

	//Aktuelle Zeile fuer Hauptschleife beginnt bei 0 zu zaehlen und endet bei Hoehe-1                                
    for(m=0;m<=hoehe-1;m++)                         
    {
	//Tab Sprung, damit die Pyramide nicht am Rand klebt.
        printf("\t");  

	//1. Innere Schleife für Leerstellen setzen. Werte mussten um 1 verschoben werden, weil sonst falsch gezeichnet wird. Urspruenglich spacer=hoehe-m-1;                             
        for(spacer=hoehe-m-2;spacer>=0;spacer--)    
        {
            printf(" ");
        }
	//Ruecksetzung des Laufindiz für die zweite Schleife
        i=0;  
	//2. innere Schleife zum Kreuz setzen. Urspruenglich cross=m+m+1;                                      
        for (cross=m+m;i<=cross;i++)                
        {
            printf("x");
        }
	//Zeilenumbruch für erneuten Hauptschleifendurchlauf
        printf("\n");                               
    }

	system("pause");
    return 0;
}
