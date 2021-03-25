#include <stdio.h>

int main()
{
	int i;
	for(i=0;i<256;i++)
	{
		printf("%2d %2c\n",i,i);
/*		if (i==50)
		{
			printf("\t");
		}*/
	}
	getchar();
	return 0;
}
