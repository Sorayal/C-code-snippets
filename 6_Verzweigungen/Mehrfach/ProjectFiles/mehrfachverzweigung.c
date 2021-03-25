//Mehrfachverzweigung
/*unterschiedliche Schreibweisen*/

#include <stdio.h>

int main()

{
	int zahl1, zahl2;
	
	printf("\nBitte geben Sie eine Ganzzahl ein: ");
	scanf("%i",&zahl1);
	printf("\nBitte geben Sie noch eine Ganzzahl ein: ");
	scanf("%i",&zahl2);
	
	if(zahl1 < zahl2)
	{
		printf("Zahl2 ist groesser\n");
	}
	else if(zahl1 > zahl2)
	{
		printf("Zahl1 ist groesser\n");
	}
	else if(zahl1 == zahl2)
	{
		printf("Zahl1 ist gleich Zahl2\n");
	}
	else
	{
		printf("hier stimmt was nicht!\n");
	} 
	

/*	
	if(zahl1 < zahl2)
	{
		printf("Zahl2 ist groesser\n");
	}
	else 
	{
		if(zahl1 > zahl2)
		{
			printf("Zahl1 ist groesser\n");
		}
		
		else
		{
			if (zahl1 == zahl2)
			{
				printf("Zahl1 ist gleich Zahl2\n");
			}
			else
			{
				printf("hier stimmt was nicht!\n");
			}	
		}
	}
	
	*/
	
	printf("\n");
	system("Pause");
	return 0;
}
