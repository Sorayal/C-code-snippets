//Size of Variablentypen/Datentypen
//Variablen und ihre Typen

#include <stdio.h>

int main()
{
	printf("Ein char benoetigt auf dieser Maschine %i Byte\n",sizeof(char));
	printf("Ein signed char benoetigt auf dieser Maschine %i Byte\n",sizeof(signed char));
	printf("Ein unsigned char benoetigt auf dieser Maschine %i Byte\n",sizeof(unsigned char));
	printf("Ein int benoetigt auf dieser Maschine %i Byte\n",sizeof(int));
	printf("Ein signed int benoetigt auf dieser Maschine %i Byte\n",sizeof(signed int));
	printf("Ein unsigned int benoetigt auf dieser Maschine %i Byte\n",sizeof(unsigned int));
	printf("Ein long benoetigt auf dieser Maschine %i Byte\n",sizeof(long));
	printf("Ein float benoetigt auf dieser Maschine %i Byte\n",sizeof(float));
	printf("Ein double benoetigt auf dieser Maschine %i Byte\n",sizeof(double));
	printf("Ein long double benoetigt auf dieser Maschine %i Byte\n",sizeof(long double));
	
	printf("\n");
	system("Pause");
	return 0;
}
