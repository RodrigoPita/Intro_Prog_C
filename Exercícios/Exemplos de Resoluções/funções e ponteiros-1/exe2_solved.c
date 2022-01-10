#include<stdio.h>
void troca(int *a, int *b){
  int temp;
  /* faltam comandos aqui */
  temp = *a;
  *a = *b;
  *b = temp;
}

int main (void){
  int x,y;
  puts("Entre com doi números inteiros separados por um espaço");
  scanf("%d %d", &x, &y);
  troca (&x, &y);
  printf("Troquei ----> %d %d\n", x, y);
  return 0;
}
