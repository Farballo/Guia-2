/*
16) Escribir un fragmento de código basado en una directiva al preprocesador para realizar la siguiente tarea:
Si la constante simbólica TRUE está definida, eliminarla y volverla a definir como 1. 
*/

#include <stdio.h>

#define TRUE 0
#ifdef TRUE
  #undef TRUE
  #define TRUE 1

#endif
int main(void)
{
  int Valor = TRUE;

  printf("%i\n", Valor);

  return 0;
}