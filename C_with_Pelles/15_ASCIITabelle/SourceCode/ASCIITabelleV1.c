/* ASCII Tabelle */

#include<stdio.h>

int main()
{
	int i;
	for(i=0;i<=255;i++)
	{
		//\t Tabschritt
		printf("\t%i\t%c\n",i,i);  
	}
	getchar();
	return 0;
}
