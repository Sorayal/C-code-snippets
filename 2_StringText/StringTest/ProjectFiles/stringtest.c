//Test String Funktioniert nicht, strdin
// Char Array(String) Vergleich
// Buggy

#include <stdio.h>

int main()
{
	char test[4],test2[4];
	printf("Geben Sie einen Text ein\n");
	scanf("%s",&test[0]);
	
	fflush(stdin);
	
	printf("Geben Sie noch einen Text ein\n");
	scanf("%s",&test2[0]);
	
	if(test==test2)
	{
	printf("yes");
	}
	
	else 
	{
		printf("no");
	}

	printf("\n");
	system("Pause");
	return 0;
}
