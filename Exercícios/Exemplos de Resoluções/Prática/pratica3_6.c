#define DIM 80
#include <string.h>
#include <stdio.h>
int main ( void ){
  char frase[DIM];
  int i, j, eh_palindromo = 1; //eh_palindromo = true

  puts("Entre com a frase:");
  gets(frase);

  for(i = 0, j = strlen(frase)-1; i < strlen(frase); i++, j--){
    if (frase[i] != frase[j]){
      eh_palindromo=0;
      break;
    }
  }

  if(eh_palindromo){
    puts("A frase é um palíndromo");
  }else{
    puts("A frase não é um palíndromo");
  }
  return 0;
}
