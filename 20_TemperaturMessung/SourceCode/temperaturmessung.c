#include <stdio.h>

//Temperaturmessung Aufgabe
int main (void)

{
    int temperatur = 24;
    if(temperatur>=0 && temperatur<=16)
        printf("zu kalt");
    else if(temperatur >=17 && temperatur<=24)
        printf("angenehm");
    else if(temperatur >=25 && temperatur<=50)
        printf("zu heiss");
    else
        printf("Temperatur ausserhalb zumutbarer Bereich");

	
	printf("\n");
	system("Pause");
    return 0;
}
