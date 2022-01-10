#include<stdio.h>
int main(void){
  int vetor[] = { 10, 20, 30, 40, 50 };
  int *p1;

  p1 = &vetor[2];
  printf("%d\n", *p1);
  printf("%x\n", p1);
  p1++;
  printf("%d\n", *p1);
  printf("%x\n", p1);
  p1 = p1 + 1;
  printf("%d\n", *p1);
  printf("%x\n", p1);
  return 0;
}
