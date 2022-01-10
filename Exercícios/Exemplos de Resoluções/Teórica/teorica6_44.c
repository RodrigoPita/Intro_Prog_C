#include<stdio.h>
int main (void){
  float reais[] = {1.0, 2.0, 3.0, 4.0, 5.0f};
  float *p1, *p2;

  p1 = &reais[2];

  p2 = reais;
  printf("Diferença entre ponteiros %ld\n", p1 - p2);
  printf("%f\n", *reais);
  return 0;
}
