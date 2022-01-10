#include<stdio.h>
#include<stdlib.h>
int main (void){
  FILE *arquivo;
  int inteiro;
  float real;
  char caracter;
  char *cadeia;
  char nome[] = "dados.txt";

  puts("Entre com um número inteiro: ");
  scanf("%d", &inteiro);

  puts("Entre com um número real: ");
  scanf("%f", &real);


  puts("Entre com um caracter: ");
  __fpurge(stdin);
  caracter = getchar();

  puts("Entre com uma frase de até 40 caracteres: ");
  cadeia = (char *) malloc(41 * sizeof(char));
  if (!cadeia) return 1;
  __fpurge(stdin);
  fgets(cadeia, 41, stdin);

  arquivo = fopen(nome, "w");
  if (!arquivo) {
    puts("Houve um erro ao abrir o arquivo");
    return 1;
  }

  fprintf(arquivo, "%d\n%f\n%c\n%s", inteiro, real, caracter, cadeia);
  puts("Arquivo impresso.");
  return 0;
}
