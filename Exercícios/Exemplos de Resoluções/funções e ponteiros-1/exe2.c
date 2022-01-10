#include<stdio.h>
void troca(int *a, int *b){
  int temp;
  /* faltam comandos aqui  */
}

int main (void){
  int x,y;
  puts("Entre com dois números inteiros separados por um espaço");
  scanf("%d %d", &x, &y);
  troca (&x, &y);
  printf("Troquei ----> %d %d\n", x, y);
  return 0;
}
