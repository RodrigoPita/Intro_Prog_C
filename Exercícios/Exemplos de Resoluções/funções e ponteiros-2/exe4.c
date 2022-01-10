#include<stdio.h>
#include<stdlib.h>

int contaDigitos(char *frase);

int main (void){
  char **matriz;
  int *tamanho_linhas;
  int lin, col, i, digitos;

  puts("Qual o numero de linhas.");
  scanf("%d", &lin);
  matriz = (char **)malloc(lin*sizeof(char *));
  tamanho_linhas = calloc(lin, sizeof(int));
  if (!matriz || tamanho_linhas == NULL){
    puts("Nao ha espaço. ");
    return 1;
  }

  for(i=0;i<lin;i++){
    printf("Qual o numero de colunas da linha %d? ", i);
    scanf("%d", &col);
      __fpurge(stdin);
    *(matriz + i) = (char *) malloc((col+1)*sizeof(char));
    if(!*(matriz+i)){
      printf("Sem espaco para linha %d", i);
      return 1;
    }
    *(tamanho_linhas + i) = col;
  }

  //captura linhas
  for(i = 0; i<lin;i++){
    printf("Linha %d\n", i);
    fgets(*(matriz + i), *(tamanho_linhas + i)+1, stdin);
    __fpurge(stdin);
  }

  //imprime linhas
  for(i = 0; i<lin;i++){
    printf("Linha %d: %s\n", i, *(matriz + i) );
  }

  //imprime dados
  printf("Número de linhas: %d\n", lin);
  digitos = 0;
  for(i = 0; i<lin;i++){
    printf("A Linha %d possui %d caracteres. \n", i, *(tamanho_linhas + i) );
    digitos += contaDigitos(*(matriz + i));
  }
  printf("A quantidade total de dígitos é %d\n", digitos);
  return 0;
}

int contaDigitos(char *frase){
  int i, count = 0;
  for (i = 0; *(frase + i) != '\0'; i++){
    if (*(frase + i) >= '0' && *(frase + i) <= '9') count ++;
  }
  return count;
}
