#include<stdio.h>
int main ( void ){
  char c;
  c = getchar();
  while (c != EOF){
    putchar(c);
    c = getchar();
  }
  printf("%d\n", EOF);
  return 0;
}
