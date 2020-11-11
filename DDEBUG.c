#include <stdio.h>
/*#define DEBUG*/
/*Se puede definir una macro al momento de compilar al poner -DDEBUG. Puede ser cualquier macro, hay que ´poner -D y junto el numbre de la macro */

/*Tambien le podriamos asignar un valor a la macro en el momento de compilacion. Con -D<NOMBRE>[=]*/

int main(void)
{
#ifdef DEBUG
  printf("DEBUGIN\n");
#endif

  printf("Hello world\n");

  return 0;

}