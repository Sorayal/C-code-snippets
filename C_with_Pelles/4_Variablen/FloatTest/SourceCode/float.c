// Test Float Division

#include <stdio.h>

int main ()
{
	float zahl1,zahl2,erg;
	
	printf("\nBitte geben Sie eine Zahl ein\n");
	scanf("%f",&zahl1);	
	printf("\nBitte geben Sie eine zweite Zahl ein\n");
	scanf("%f",&zahl2);	

	if(zahl2 != 0){
		erg = zahl1 / zahl2;
		printf("\nDas Ergebnis ist %.2f",erg);
	}
	else{
		printf("\nDivision durch Null undefiniert.");
	}



	printf("\n");
	system("Pause");
	return 0;
}
