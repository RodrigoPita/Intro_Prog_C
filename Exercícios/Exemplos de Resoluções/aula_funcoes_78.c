#include<stdio.h>

unsigned long int fat (unsigned long int num);

int main( void ) {
  int i;
  puts("Entre com um número inteiro.");
  scanf("%d", &i);
  printf("Fatorial de %d é %lu\n", i, fat(i));
  return 0;
}

unsigned long int fat (unsigned long int num){
  if(num == 0){
    return 1;
  } else {
    return num * fat(num-1);
  }
}
