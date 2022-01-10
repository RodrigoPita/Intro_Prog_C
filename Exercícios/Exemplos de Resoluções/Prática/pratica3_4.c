#define DIM 80
#include<stdio.h>
#include<string.h>
int main ( void ){
  char nome[DIM];
  int maiusculas = 0, minusculas = 0, brancos = 0, pares = 0;

  /* letra a */
  puts("Entre com um nome de até 80 caracteres");
  gets(nome);

  printf("O nome entrado foi: '%s'\n", nome);

  /* letra b */
  printf("O nome tem o tamanho: %ld\n", strlen(nome));

  /* letra c */
  for (int i = 0; i < strlen(nome); i++){
    if (nome[i]>=97 && nome[i]<=122){
      minusculas++;
    } else if (nome[i]>=65 && nome[i]<=90){  /* letra d*/
      maiusculas++;
    } else if (nome[i] == ' ' /* ou 32*/){  /* letra e */
      brancos++;
    }
    if(i < strlen(nome)-1 &&
      ((nome[i] == 'r' || nome[i] == 'R') &&
       (nome[i+1] == 'r' || nome[i+1] == 'R') ) ){
      pares++;
    }

  }

  printf("Com %d letras minúsculas, %d letras maiúsculas e %d espaços.\n",
            minusculas, maiusculas, brancos);

  printf("Os pares aparecem %d\n", pares);
  puts(""); //pular uma linha
  return 0;
}
