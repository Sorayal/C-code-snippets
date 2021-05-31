#include <stdio.h>

int main()

{
	float zahl1,zahl2,ergebnis;
	char operator;
	
	printf("\nGeben Sie die erste Zahl ein: ");
	scanf("%f",&zahl1);
	
	printf("\nGeben Sie die mathematische Operation an, die Sie ausfuehren wollen (+,-,*,/): \n");
	printf("\n+ fuer Addition");
	printf("\n- fuer Subtraktion");
	printf("\n* fuer Multiplikation");
	printf("\n/ fuer Division\n");
	fflush(stdin);											//das ist notwendig, sonst wird das Enter als Char verwertet und angenommen.
	scanf("%c",&operator);
	
	printf("Geben Sie die zweite Zahl ein: ");
	scanf("%f",&zahl2);
	

	
	switch(operator)
	{
		case '+':ergebnis = zahl1 + zahl2;
		printf("Das Ergebnis lautet %.2f\n",ergebnis);
		printf("Es wurde %c gewaehlt",operator);
		break;
		
		case '-':ergebnis = zahl1 - zahl2;
		printf("Das Ergebnis lautet %.2f",ergebnis);
		printf("Es wurde %c gewaehlt",operator);
		break;
		
		case '*':ergebnis = zahl1 * zahl2;
		printf("Das Ergebnis lautet %.2f",ergebnis);
		printf("Es wurde %c gewaehlt",operator);
		break;
		
		case '/':ergebnis = zahl1 / zahl2;
		printf("Das Ergebnis lautet %.2f",ergebnis);
		printf("Es wurde %c gewaehlt",operator);
		break;
		
		default:printf("\nDas ist ungültig"); 
	}
	
	printf("\n");
	system("Pause");
	
}
