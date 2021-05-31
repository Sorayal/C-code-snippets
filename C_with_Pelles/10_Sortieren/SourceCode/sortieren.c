/*Bubblesort*/
#include <stdio.h>

int main()
{
	//Array 6 Felder
	int zahlen[]={12,34,2,48,23,6};  				
	char getauscht = 1;
	int elemente = sizeof(zahlen)/sizeof(int),telemente = elemente;
	int i,temp;										
	
	printf("\nVor der Sortierung:\n");
	for(i=0;i<elemente;i++)
		printf("\t%2i",zahlen[i]);
		
	/* Arrays sortieren mit Bubblesort*/
	//getauscht == 1 geht ebenso. Kopfgesteuerte Schleife
	while(getauscht)								
	{
		getauscht = 0;
		for(i=1;i < telemente;i++)
		{
			//das zweite Arrayfeld wird mit dem ersten Arrayfeld i-1 verglichen.
			if(zahlen[i] < zahlen[i-1])	 			
			{		
				temp = zahlen[i];
				zahlen[i] = zahlen[i-1];
				zahlen[i-1] = temp;
				getauscht = 1; 
			}
		}
		//Elemente wird um einen verkürzt, da das grösste Element auf jeden Fall oben liegt.
		telemente--;								
	}
	
	printf("\nNach der Sortierung:\n");
	for(i=0;i<elemente;i++)
		printf("\t%2i",zahlen[i]);
	
	printf("\n");									
	system("Pause");
	return 0;
}
