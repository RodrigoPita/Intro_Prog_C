#include<stdio.h>
#define DIM 3

typedef struct _JOGADOR{
  int pontos;
  char nome[42];
} JOGADOR;

void imprimeJogadores(JOGADOR * j, int tamanho);

int main(void){
  JOGADOR jogadores[DIM];
  int i;
  for (i = 0; i < DIM; i++){
    printf("Entre o nome do jogador %d: ", i + 1);
    fgets((jogadores + i)->nome, 42, stdin);
    //gets(jogadores[i].nome);
    printf("Quantos pontos ele fez? ");
    scanf("%d", &(jogadores+i)->pontos);
    __fpurge(stdin);
    puts("=============");
  }
  imprimeJogadores(jogadores, DIM);
}

void imprimeJogadores(JOGADOR *  j, int tamanho){
  int i;
  for (i = 0; i < tamanho; i++){
    printf("Jogador %d\n nome: %s pontos: %d\n", i+1, (j+i)->nome, (j+i)->pontos);
    printf("====================\n");
  }
}
