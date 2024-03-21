Problema 2

//SumaArregloPunteros
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int a;
  int *b;
  a = 15;
  b = &a;
  *b += a;
  printf( "El valor de a es = %d.\n", a );
  return EXIT_SUCCESS;

}