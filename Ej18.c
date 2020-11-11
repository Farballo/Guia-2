/*
18) ¿Cómo se puede parametrizar el código del ejercicio 5), de forma de poder permitir varios idiomas? (usar
directivas al preprocesador). 

5) a) Definir un tipo enumerativo mes_t con 12 símbolos que representen cada uno de los meses del año.
b) Escribir un fragmento de código que a partir del contenido de una variable de tipo mes_t, imprima por pantalla
la descripción del mes (traducción). 

*/
#include <stdio.h>

#define GERMAN_LENGUAGE 
#define ENGLISH_LENGUAGE 
#define MACRO_SPANISH 1
#define MAX_OPTION_VALUE 3
#define MIN_OPTION_VALUE 1


#define TRUE 0
#define FALSE 1

/*
typedef enum {TRUE, FALSE} status_t;
*/

#define ENGLISH_LENGUAGE_STATUS 1
#define GERMAN_LENGUAGE_STATUS 1

#ifdef GERMAN_LENGUAGE
  #include "german_lenguage.h"
  #undef GERMAN_LENGUAGE_STATUS 
  #define GERMAN_LENGUAGE_STATUS TRUE;
  #define MACRO_GERMAN 3
  #typedef enum{
  JANUAR,
  FEBRUAR,
  JULY
  } monaten_t;
  
#endif

#ifdef ENGLISH_LENGUAGE
  #include "english_lenguage.h"
  #undef ENGLISH_LENGUAGE_STATUS
  #define ENGLISH_LENGUAGE_STATUS TRUE;
  #define MACRO_ENGLISH 2
#endif


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
}mes_t;

typedef enum{
  SPANISH,
  ENGLISH,
  GERMAN,
  INVALID_LENGUAGE  
} lenguage_t;

int main(void)
{
  lenguage_t chosen_lenguage;
  
  /*Lectura*/
  int option;
  int i = 0;
  int st;
  int c;

  printf("Ingrese 1 para saber en que mes estamos en el idioma español\n");
  printf("Enter 2 para saber en que mes estamos en el idioma ingles\n");
  printf("Ingrese 3 para saber en que mes estamos en el idioma aleman\n");

  if(!(st = scanf("%i", &i))) /*Validacion ante caracteres que no sean numeros*/
  {
    fprintf(stderr,"%s\n", "Error: un caracter distinto a un numero.\n");
    return 1;
  }
  if (st == EOF)
    return 1;

  option = i;

  if (option > MAX_OPTION_VALUE || option < MIN_OPTION_VALUE)
  {
    fprintf(stderr, "%s\n", "Error: El numero que ingreso es invalido");
    return 1;
  }
  while ((c=getchar()) != '\n' ); /*Limpieza de buffer*/


  /* Traducción */
	switch(option) {
		case SPANISH:
			chosen_lenguage = SPANISH;
			break;
		case ENGLISH:
			chosen_lenguage = ENGLISH;
			break;
		case GERMAN:
			chosen_lenguage = GERMAN;
			break;
		default:
		  chosen_lenguage = SPANISH;;
	}

  /* Procesamiento */
  if (chosen_lenguage == SPANISH)
  {
      mes_t mes_actual = ENERO;

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
  }
  if (chosen_lenguage == ENGLISH)
  {

    if (ENGLISH_LENGUAGE_STATUS == FALSE){
      fprintf(stderr, "%s\n", "Sorry, our program does not suport english lenguage");
      rerurn 1;
    }
      /*Este paso se podria implmentar pidieendole a algo mas que obtenga el valor de actual_month*/
      months_t actual_month = JANUARY;

      switch(actual_month)
      {
      case JANUARY:
            printf("%s\n", MSJ_ACTUAL_MONTH_JANUARY);
            break;

      case FEBRUARY:
            printf("%s\n", MSJ_ACTUAL_MONTH_FEBRUARY);
            break;
      
      case JULY:
            printf("%S\n", MSJ_ACTUAL_MONTH_JULY);
            break;
      }
  }


  if (chosen_lenguage == GERMAN)
  {

    if (GERMAN_LENGUAGE_STATUS == FALSE){
      fprintf(stderr, "%s\n", "Sorry, our program does not suport english lenguage");
      return 1;
    }

    monaten_t monat = JANUAR;

      switch(monat)
      {
      case JANUAR:
            printf("%s\n", MSJ_ACTUAL_MONTH_JANUARY_DE);
            break;

      case FEBRUAR:
            printf("%s\n", MSJ_ACTUAL_MONTH_FEBRUARY_DE);
            break;
      
      case JULY:
            printf("%S\n", MSJ_ACTUAL_MONTH_JULY_DE);
            break;
      }
  }
  return TRUE;
}