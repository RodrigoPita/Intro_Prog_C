#include<stdio.h>

typedef struct _JOGADOR {
  char nome[40];
  int recorde;
} JOGADOR;

int main() {
  FILE *pFile;
  JOGADOR recordistas[3];
  int i;
  char linha[80];

  pFile = fopen("estruturas.bin", "w");
  if(!pFile) return 1;

  for (i = 0; i < 3; i++){
    printf("Nome do jogador (so um nome!!!) %d:\n", i);
    fgets(recordistas[i].nome, 40, stdin);
    printf("Recorde jogador %d: ", i);
    fgets(linha, 80, stdin);
    sscanf(linha, "%d", &recordistas[i].recorde);
    __fpurge(stdin);
  }
  fwrite(recordistas, sizeof(JOGADOR), 3, pFile);
  fclose(pFile);

  return 0;
}
