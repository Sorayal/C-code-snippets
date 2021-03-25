/* Modulo Restwert Berechnung */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main ()
{
  const int x = 4, y = 10;
  int random;

  srand (time (NULL));

  /* erzeugt Zufallszahlen zwischen 4 und 10 inklusive */
  //Erst wird Modulo 7 gerechnet, normal würden Zahlen zwischen 0-6 rauskommen. Der Bereich wird um 4 Schritte verschoben.
  random = (rand () % ((y + 1) - x)) + x;  
  printf ("%d\n", random);

  printf("\n");
  system("Pause");  
  return 0;
}
