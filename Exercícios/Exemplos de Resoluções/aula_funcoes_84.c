#include<stdio.h>

float Elevar(float x, int n){
  if (n <=1){
    return x;
  } else {
    return x * Elevar(x, n-1);
  }
}

int main(void){
  printf("%f\n", Elevar (2,4));
  return 0;
}
