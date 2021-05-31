#include <stdio.h>

int main (void)
{
	int n,i;
	double ergebnis = 1;
	
	printf("Geben Sie eine Zahl ein\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		ergebnis = ergebnis * i;
	}

	printf("%f",ergebnis);

	printf("\n");
	system("Pause");
	return 0;
}
