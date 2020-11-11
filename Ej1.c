#include <stdio.h>


typedef enum {TRUE,FALSE} bool_t;


int main(void)
{
  
  int j = 0;
  bool_t funciona = FALSE;

  if (j == TRUE){
  printf("Entro\n");
  fprintf(stderr,"xD\n");

  return FALSE;
  }

  printf("Estoy imprimiendo el valor de la variable funciona:%d\n",funciona);
  
  return TRUE;
}