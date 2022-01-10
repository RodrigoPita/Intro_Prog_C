#include<stdio.h>
#include<stdlib.h>
#define LIN 3
#define COL 4

int main(void){
  int *matriz;
  int i, j;

  matriz = malloc(LIN*COL*sizeof(int));
  if(!matriz){
    puts("Erro. \n");
    return 1;
  }
  for (i=0; i<LIN; i++){
    for(j=0; j<COL;j++){
      printf("Elemento %d %d = ",i,j );
      scanf("%d", matriz+(i*COL+j));
    }
  }
  return 0;
}
