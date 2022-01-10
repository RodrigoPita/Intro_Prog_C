#include<stdio.h>

void imprimeInvertido(int *a, int tamanho);

int main(void){
  int inteiros[10], tamanho=0, i;

  while(1){
    puts("Quantos inteiros serão dados como entrada?");
    scanf("%d", &tamanho);
    if (tamanho>0 && tamanho <=10) break;
    puts("O valor permitido é entre 1 e 10");
  }

  for (i=0;i<tamanho;i++){
    printf("Entre com o %dº inteiro: ", i+1);
    scanf("%d", &inteiros[i]);
  }

  imprimeInvertido(inteiros, tamanho);

  return 0;
}

void imprimeInvertido(int *a, int tamanho){
  a += tamanho - 1;
  int controle = tamanho;
  while(controle-- > 0){
    printf("%d ", *a--);
  }
  printf("\n");
}
