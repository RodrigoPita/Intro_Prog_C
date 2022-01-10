#include<stdio.h>
#include<stdlib.h>
#define LIN 2
#define COL 3
int main(void){
  char *l[LIN];
  int i;
  for (i = 0; i< LIN; i++){
    if(!(l[i] = malloc(COL*sizeof(char)))){
      printf("Sem memória %d. \n", i);
      return i+1;
    }
  }
  for (i=0; i< LIN; i++){
    printf("Linha %d?\n", i);
    fgets(l[i], COL, stdin);
    __fpurge(stdin);
  }
  for (i=0;i<LIN;i++){
    printf("Linha %d %s. \n", i, l[i]);
  }
  return 0;
}
