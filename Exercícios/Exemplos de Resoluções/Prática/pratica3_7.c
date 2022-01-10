#include<string.h>
#include<stdio.h>
#define DIM 20
int main ( void ){
  char frase[DIM];
  puts("Entre a frase");
  gets(frase);

  for (int i =0; i<strlen(frase);i++){
    if(frase[i]>=97 && frase[i]<=122){
      frase[i] = frase[i] - 'a' + 'A';
    }
  }

  puts(frase);
  return 0;
}
