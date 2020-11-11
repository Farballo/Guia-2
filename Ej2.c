#include <stdio.h>
#define MSJ_ERROR "Ocurrio un error del tipo:"
#define MSJ_CORRECT_STATE "Estado correcto."
#define MSG_USR "Ingrese un número no negativo:"
#define ERROR_MSG "ERROR"
#define ERROR_NEGATIVE_NUMBER "número negativo"
#define ERROR_NOT_A_NUMBER "no se pudo interpretar un número entero"

typedef enum { TRUE, FALSE} bool_t;
typedef enum 
{
  OK = 0,
  ERROR_NOT_A_NUMBER_STATUS = 1,
  ERROR_NEGATIVE_NUMBER_STATUS = 2,
  ERROR_INVALID_STATE = 3,
  ERROR_CLEARING_IMPUT_BUFFER = 4,
  ERROR 

} status_t;

int main(void)
{
  bool_t Estado = TRUE;
  int st;

  if (Estado == FALSE)
  {
    fprintf(stderr,"%s", MSJ_ERROR);
    printf("\t%d\n",ERROR_INVALID_STATE);
    
    return ERROR_INVALID_STATE;
  } 

   
  printf("%s\n",MSG_USR);

  if(!scanf("%d", &st)) 
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NOT_A_NUMBER);
    printf("%s\t%d\n", MSJ_ERROR,ERROR_NOT_A_NUMBER_STATUS);

    return ERROR_NOT_A_NUMBER_STATUS;
  }


  if(st < 0)
  {
    fprintf(stderr, "%s : %s \n", ERROR_MSG, ERROR_NEGATIVE_NUMBER);
    printf("%s\t%d\n", MSJ_ERROR,ERROR_NEGATIVE_NUMBER_STATUS);

    return ERROR_NEGATIVE_NUMBER_STATUS; 
  }


while ((st = getchar()) != '\n');
if (st == EOF)
  return ERROR_CLEARING_IMPUT_BUFFER;


printf("El valor del estado es:\t%d\n", Estado);

  return TRUE;
}






