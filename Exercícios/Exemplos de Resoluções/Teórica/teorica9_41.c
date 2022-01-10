#include<stdio.h>
#define MAX 80
int main (void){
  char linha[MAX];
  FILE *pa;
  char *nome = "texto.txt";

  if ((pa = fopen(nome, "w+")) == NULL){
    printf("\n\nNao foi possivel abrir o arquivo.\n");
    return 1;
  }

  fgets(linha, MAX, stdin);
  while(!feof(stdin)){
    fputs(linha, pa);
    fgets(linha, MAX, stdin);
  }

  rewind(pa); /*volta ao inicio do arquivo */
  printf("\nTerminei de escrever, agora vou ler. \n\n");
  fgets(linha, MAX, pa);
  while(!feof(pa)){
    puts(linha);
    fgets(linha, MAX, pa);
  }
  fclose(pa);
  return 0;
}
