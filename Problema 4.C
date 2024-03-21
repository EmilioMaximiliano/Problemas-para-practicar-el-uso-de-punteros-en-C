Problema 4

//ContarCaracteres
#include <stdio.h> 
#include <stdlib.h> 

int main()
{
  char numero;

  numero = 14;

  printf( "La variable numero " );
  printf( "se almacena en la posición de memoria %p,", (void *) &numero );
  printf( "y su numero de caracteres es %d\n", numero );

  return EXIT_SUCCESS;
}