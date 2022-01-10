#include<stdio.h>
#define TAMANHO 3
typedef struct _JOGADOR {
  char nome[40];
  int recorde;
} JOGADOR;



int main() {
  FILE *pFile;
  JOGADOR recordistas[TAMANHO];
  int i;
  pFile = fopen("estruturas.bin", "r");
  if(!pFile) return 1;

  fread(recordistas, sizeof(JOGADOR), TAMANHO, pFile);

  for (i = 0; i < TAMANHO; i++){
    printf("Nome do jogador: %d: %s\n", i, recordistas[i].nome);
    printf("Recorde jogador %d: %d\n", i, recordistas[i].recorde);
    puts("================");
  }

  fclose(pFile);

  return 0;
}
