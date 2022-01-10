#include<stdio.h>
#include<stdlib.h>
int main (void){
  FILE *arquivo;
  int inteiro;
  float real;
  char caracter;
  char *cadeia;
  char nome[] = "dados.txt";


  cadeia = (char *) malloc(41 * sizeof(char));
  if (!cadeia) return 1;

  arquivo = fopen(nome, "r");
  if (!arquivo) {
    puts("Houve um erro ao abrir o arquivo");
    return 1;
  }

  fscanf(arquivo, "%d\n%f\n%c\n", &inteiro, &real, &caracter);
  fgets(cadeia, 41, arquivo);

  printf("%d\n%f\n%c\n%s", inteiro, real, caracter, cadeia);
  return 0;
}
