#define DIM 40
#include<stdio.h>
int main(void) {
  char nome[DIM]; /* linha de caracteres lidos */

  /* Entradaa de dados do vetor */
  printf("Por favor, qual o seu nome?\n");
  //scanf("%[0-9a-zA-Z ]", nome); //aceita caracteres e espaços
  //scanf("%[^\n]s", nome); //aceita até o Enter
  scanf("%5s", nome);
  printf("Sou um computador. Posso ajudá-lo %s?\n", nome);

  return 0;
}
