#include <stdio.h>

int main()

{
	float zahl1,zahl2,ergebnis;
	char operator;

	printf("\nGeben Sie die erste Zahl ein: ");
	scanf("%f",&zahl1);

	printf("\nGeben Sie die zweite Zahl ein: ");
	scanf("%f",&zahl2);

	printf("\nGeben Sie die mathematische Operation an, die Sie ausfuehren wollen (+,-,*,/): \n");
	printf("\n+ fuer Addition");
	printf("\n- fuer Subtraktion");
	printf("\n* fuer Multiplikation");
	printf("\n/ fuer Division");
	fflush(stdin);
	scanf("%c",&operator);

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

		default:printf("\nDas ist ung�ltig");
	}

	printf("\n");
	system("Pause");

}
