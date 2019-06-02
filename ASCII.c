/* ASCII Tabelle */

#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<=255;i++)
	{
		printf("\t%i\t%c\n",i,i);  //\t Tabschritt
	}
	return 0;
}
