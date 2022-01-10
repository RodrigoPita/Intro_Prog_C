#include<stdio.h>

void imprime1(int n){
  if (n<0) return;
  printf("%2d, ", n);
  imprime1(n-1);
}

void imprime2(int n){
  if (n < 0) return;
  imprime2(n-1);
  printf("%2d, ", n);

}


int main(void){
    imprime1(10);
    printf("\n");
    imprime2(10);
    printf("\n");
    return 0;
}
