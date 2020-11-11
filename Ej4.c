/*
4) a) Definir un tipo de dato dato_t a partir del tipo nativo float (mediante el uso de typedef).
b) Definir un tipo enumerativo escala_t que contenga los símbolos CELSIUS y FAHRENHEIT.
c) Escribir un fragmento de código que lea del flujo de entrada estándar un número que represente un valor
de temperatura en una de las dos escalas y la convierta paramétricamente a la otra, mostrando el resultado
por el flujo de salida estándar. 
*/

#include <stdio.h>
#define MSJ_TEMPERATURA "Ingrese una Temperatura"
#define MSG_USR "Ingrese un número no negativo:"
#define ERROR_MSG "ERROR"
#define ERROR_NEGATIVE_NUMBER "número negativo"
#define ERROR_NOT_A_NUMBER "no se pudo interpretar un número entero"
#define OPERACION_MATEMATICA_TRANSFORMACION_FAHRENHEIT_CELSIUS ((float) 5/9 * (dato-32));
#define OPERACION_MATEMATICA_TRANSFORMACION_CELSIUS_FAHRENHEIT ((dato * 1.8) +32);
typedef float dato_t;
typedef enum {OK, ERROR} status_t;
typedef enum {CELSIUS, FAHRENHEIT } escala_t;
int main(void)
{
  dato_t dato;
  int st;
  escala_t escala = FAHRENHEIT;
  printf("%s\n",MSJ_TEMPERATURA);

  if(!(st = scanf("%f", &dato)))
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NOT_A_NUMBER);
    return ERROR;
  }
  if(st < 0)
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NEGATIVE_NUMBER);
    return 1;
  } 
  while ((st = getchar()) != '\n');
  if (st == EOF)
    return ERROR;

  if(escala == CELSIUS)
  {
    dato = OPERACION_MATEMATICA_TRANSFORMACION_CELSIUS_FAHRENHEIT;
  }


  if(escala == FAHRENHEIT)
  {
    dato = OPERACION_MATEMATICA_TRANSFORMACION_FAHRENHEIT_CELSIUS;
  }


  printf("La temperatura es:\t%f\n", dato);

  return OK;
}
