#include<stdio.h>
int main (void){
  int var; //var é um inteiro
  int *varPtr; //varPtr é um ponteiro para inteiros

  var = 7;
  varPtr = &var; //varPtr aponta para onde está var

  printf("O endereço de var é %p\n"
          "O valor de varPtr é %p\n", &var, varPtr);
  printf("O valor de var é %d\n"
          "O valor que varPtr aponta é %d\n", var, *varPtr);

  //Para os fortes
  printf("Mostrando que * e & são complementares\n"
          "&*varPtr = %p\n"
          "*&varPtr = %p\n", &*varPtr, *&varPtr);
  return 0;
}
