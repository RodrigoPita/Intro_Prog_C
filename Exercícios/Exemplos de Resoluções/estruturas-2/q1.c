#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int identificador;
    char nome[42];
}INDIVIDUO;

int main(void){
  INDIVIDUO *p;
  int tamanho;
  puts("Quantos individuos serao informados?");
  scanf("%d", &tamanho);

  p = (INDIVIDUO *)malloc(tamanho * sizeof(INDIVIDUO));
  if (!p){
    puts("Nao ha memoria suficiente");
    return 1;
  }
  free(p);
  return 0;
}
