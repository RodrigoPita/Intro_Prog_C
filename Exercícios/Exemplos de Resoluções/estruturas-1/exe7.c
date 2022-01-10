#include<stdio.h>
#include<stdlib.h>
#define DIM 3

typedef struct _JOGADOR{
  int pontos;
  char nome[42];
} JOGADOR;

void imprimeJogadores(JOGADOR * j, int tamanho);

void ordenaJogadores(JOGADOR * j, int tamanho);


int main(void){
  JOGADOR * jogadores;
  int i;

  jogadores = (JOGADOR *) malloc(sizeof(JOGADOR) * DIM);
  if (jogadores == NULL) exit(1);

  for (i = 0; i < DIM; i++){
    printf("Entre o nome do jogador %d: ", i + 1);
    fgets(jogadores[i].nome, 42, stdin);
    //gets(jogadores[i].nome);
    printf("Quantos pontos ele fez? ");
    scanf("%d", &jogadores[i].pontos);
    __fpurge(stdin);
    puts("=============");
  }
  ordenaJogadores(jogadores, DIM);
  imprimeJogadores(jogadores, DIM);

  //aumenta o vetor
  jogadores = (JOGADOR *) realloc(jogadores, sizeof(JOGADOR) * (DIM + 1));
  if (jogadores == NULL) exit(1);

  //le o novo jogador
  printf("Entre o nome do novo jogador: ");
  fgets(jogadores[DIM].nome, 42, stdin);
  printf("Quantos pontos ele fez? ");
  scanf("%d", &jogadores[DIM].pontos);
  __fpurge(stdin);

  //ordena o vetor com o novo jogador
  ordenaJogadores(jogadores, DIM + 1);

  //reduz o vetor. elimina a menor pontuação
  jogadores = (JOGADOR *) realloc(jogadores, sizeof(JOGADOR) * DIM);
  if (jogadores == NULL) exit(1);

  imprimeJogadores(jogadores, DIM);
  
}

void imprimeJogadores(JOGADOR *  j, int tamanho){
  int i;
  for (i = 0; i < tamanho; i++){
    printf("Jogador %d\n nome: %s pontos: %d\n", i+1, j[i].nome, j[i].pontos);
    printf("====================\n");
  }
}

void ordenaJogadores(JOGADOR * jogadores, int tamanho){
  int i, j;
  JOGADOR temp;
  for (i = 0; i < tamanho - 1; i++){
    for (j = 0; j < tamanho - 1 - i; j++){
      if(jogadores[j].pontos < jogadores[j+1].pontos){
        temp = jogadores[j];
        jogadores[j] = jogadores[j+1];
        jogadores[j+1] = temp;
      }
    }
  }
}
