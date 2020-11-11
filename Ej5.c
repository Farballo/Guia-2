/*
5) a) Definir un tipo enumerativo mes_t con 12 símbolos que representen cada uno de los meses del año.
b) Escribir un fragmento de código que a partir del contenido de una variable de tipo mes_t, imprima por pantalla
la descripción del mes (traducción). 
*/

#include <stdio.h>
typedef enum {TRUE, FALSE} status_t;
typedef enum{
  ENERO = 1,
  FEBRERO,
  /*
  MARZO,
  ABRIL,
  MAYO,
  */
  JUNIO
  /*
  ,
  JULIO,
  AGOSTO,
  SEPTIEMBRE,
  OCTUBRE,
  NOVIEMBRE,
  DICIEMBRE
  */
}meses_t;

int main(void)
{
  meses_t mes_actual = ENERO;


  switch(mes_actual)
  {
  case ENERO:
        printf("Enero es le primer mes\n");
        break;

  case FEBRERO:
        printf("Entramos a febrero\n");
        break;
  
  case JUNIO:
        printf("el mes actual es Junio\n");
        break;
  }


  return TRUE;
}
