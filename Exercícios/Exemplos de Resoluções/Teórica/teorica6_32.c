#include<stdio.h>
int main (void){
  int i = 10;
  int *p;

  p = &i;
  *p = *p + 1;
  printf("Valor de i: %d\n", i);
  printf("Valor de *p: %d\n", *p);
  printf("Valor de &i: %x\n", &i);
  printf("Valor de p: %x\n", p);
  return 0;
}
