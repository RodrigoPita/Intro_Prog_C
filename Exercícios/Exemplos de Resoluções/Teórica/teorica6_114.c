#include<stdio.h>
#include<stdlib.h>
int main (void){
  char **matriz;
  int lin, col, i;

  puts("Qual o numero de linhas.");
  scanf("%d", &lin);
  matriz = (char **)malloc(lin*sizeof(char *));
  if (!matriz){
    puts("Nao ha espaço. ");
    return 1;
  }

  puts("Qual  o numero de colunas?");
  scanf("%d", &col);
  __fpurge(stdin);
  for(i=0;i<lin;i++){
    *(matriz + i) = (char *) malloc(col*sizeof(char));
    if(!*(matriz+i)){
      printf("Sem espaco para linha %d", i);
      return 1;
    }
  }

  for(i = 0; i<lin;i++){
    printf("Linha %d\n", i);
    fgets(*(matriz + i), col, stdin);
    __fpurge(stdin);
  }

  for(i = 0; i<lin;i++){
    printf("Linha %d: %s\n", i, *(matriz + i) );
  }
  return 0;
}
