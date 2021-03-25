#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
    int summe[]={0,0,0};
    int spieler, wuerfel, ergebnis, erster;

    srand(time(NULL));
    for(spieler=0;spieler<=2;spieler++)
    {
        printf("\nSpieler %d: ",spieler);
        for(wuerfel=0;wuerfel<5;wuerfel++)
        {
            printf("%d: ",ergebnis = rand()%6+1);
            summe[spieler] += ergebnis;
        }
        printf("Summe %d",summe[spieler]);
    }
    erster = summe[0];
/*    printf("\n%d",summe[spieler+1]); */
    for(spieler=0;spieler<3;spieler++)
    {
        if(erster<summe[spieler]) {
            erster = summe[spieler];}
    }

    printf("\n\n%d ist die hoechste Augenzahl",erster);

	printf("\n");
	system("Pause");
    return 0;
}
