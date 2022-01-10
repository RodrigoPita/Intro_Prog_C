#define DIM 40
#include<stdio.h>
int main(void) {
  char nome[DIM]; /* linha de caracteres lidos */

  /* Entradaa de dados do vetor */
  puts("Por favor, qual o seu nome?");
  gets( nome );
  puts("Alo ");
  puts( nome );
  puts("Sou um computador, posso ajudá-lo?");

  return 0;
}
