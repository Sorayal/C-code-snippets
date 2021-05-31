//Size of Variablentypen/Datentypen
//Variablen und ihre Typen

#include <stdio.h>

int main()
{
	// %i bedeutet Platzhalter 
	printf("Ein char hat %i Byte\n",sizeof(char)); 							
	printf("Ein int hat auf dieser Maschine %i Byte\n",sizeof(int));
	printf("Ein long hat auf dieser Maschine %i Byte\n",sizeof(long));
	printf("Ein float hat %i Byte\n",sizeof(float));
	printf("Ein double %i Byte\n",sizeof(double));
	printf("Ein long double hat %i Byte\n",sizeof(long double));
	
	system("Pause");
	return 0;
}
