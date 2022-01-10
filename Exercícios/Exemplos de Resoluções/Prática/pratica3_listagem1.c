#include<stdio.h>
int main(void) {
  char c;

  printf("Entre com um algarismo entre 0 e 9.\n");
  c = getchar();
  printf("O caractere lido foi o ");
  putchar(c);

  printf("\n");
  return 0;
}
