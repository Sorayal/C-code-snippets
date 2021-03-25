#include <stdio.h>

int main()
{
    int array[] = {9,8,7,6,5,4,3}, i;

	//Ausgabe 2. Arrayposition
    printf("Die 2. Array-Position beinhaltet %d\n",array[1]); 
	/*Schleife Array ausgeben. Vorsicht vor Überlaufausgabe!Index beginnt bei 0!*/
    for (i=0;i<7;i++)                                           
    {
        printf("\n%d. Array-Position ist %d", i+1, array[i]);
    }

	printf("\n");
	system("Pause");
    return 0;
}
