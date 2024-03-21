Problema 3

//DuplicarNumero
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int a;
  int *b;
  a = 10;
  b = &a;
  *b += a;
  printf( "El valor de a es = %d.\n", a );
  return EXIT_SUCCESS;

}