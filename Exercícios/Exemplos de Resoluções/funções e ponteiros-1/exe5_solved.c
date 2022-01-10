#include<stdio.h>

int tamanhoString(char *a);

int main (void){
  char frase[80] = {'\0'};
  while(1){
    puts("Entre com uma frase de até 80 caracteres:");
    gets(frase);
    if(*frase == '\0') break;
    printf("A frase tem %d caracteres.\n", tamanhoString(frase));
  }
  return 0;
}

int tamanhoString(char *a){
  int tamanho = 0;
  while(*a != '\0'){
    tamanho++;
    a++;
  }
  return tamanho;
}
