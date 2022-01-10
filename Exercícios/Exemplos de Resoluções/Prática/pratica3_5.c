#define DIM 40
#include<string.h>
#include<stdio.h>
int main (void){
  char cadeia[DIM];
  while(1){
    puts("Entre com a cadeia:");
    gets(cadeia);
    if(strlen(cadeia) == 0){
      break;
    }
    puts(cadeia);
  }
  return 0;
}
