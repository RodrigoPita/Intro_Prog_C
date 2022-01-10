#include<stdio.h>

char * achaSobrenome(char nome[]);

int main (void){
  char nomeCompleto[80];
  char *p;

  puts("Entre com o seu nome e um sobrenome.");
  gets(nomeCompleto);

  p = achaSobrenome(nomeCompleto);
  puts(p);

  return 0;
}

char * achaSobrenome(char nome[]){
  char *pnome;
  int i = 0;

  while (nome[i] != ' '){
    i++;
  }
  i++;
  pnome = &nome[i];
  return pnome;
}
