#include<stdio.h>

int strcop(char *d, char *o);

int main(void){
  char destino[31];
  char *origem = "cadeia de caracteres de origem";

  strcop(destino, origem);
  printf("%s\n", origem);
  printf("%s\n", destino);
  return 0;
}

int strcop(char *d, char *o){
  while ((*d++ = *o++) != '\0');
  return 0;
}
