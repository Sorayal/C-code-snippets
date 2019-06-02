/*Zufall*/

#include <stdio.h>
#include <stdlib.h>  	//standardlibrary
#include <time.h>		//Library der Systemzeit

int main()
{
	int zufall,i;
	
	srand(time(NULL)); //Zufallsgenerator initialisieren
	/* printf("%d",time(NULL) /60 /60 /24/365+1970); */ //Systemzeit seit 1970
	

	for(i=1;i<=100;i++)
	{
	
		zufall=rand()%100+1;        //Modulo verwenden, da der Restwert ja zwischen 0 und 99 liegt. Danach wird noch um 1 aufaddiert.
		printf("%d\n",zufall);
	}

	
	return 0;
}
