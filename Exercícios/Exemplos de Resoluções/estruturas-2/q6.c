#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_IDENTIFICADOR 999

typedef struct {
    int identificador;
    char nome[42];
}INDIVIDUO;

void preenche(INDIVIDUO * dados, int tam);
void imprime(INDIVIDUO * individuos, int quantos);
INDIVIDUO * maiorIdentificador(INDIVIDUO * dados, int tam);

int main(void){
  INDIVIDUO *p;
  int tamanho;
  srand(time(NULL));

  puts("Quantos individuos serao informados?");
  scanf("%d", &tamanho);
  do {} while (getchar() != '\n');

  p = (INDIVIDUO *)malloc(tamanho * sizeof(INDIVIDUO));
  if (!p){
    puts("Nao ha memoria suficiente");
    return 1;
  }

  preenche(p, tamanho);
  imprime(p, tamanho);
  printf("\nMaior identificador: %s\n", maiorIdentificador(p, tamanho)->nome);

  maiorIdentificador(p, tamanho)->identificador = 0;

  imprime(p, tamanho);

  free(p);
  return 0;
}

void preenche(INDIVIDUO dados[], int tam){
int i;
  for (i=0; i<tam; i++){
    printf("Entre com o %do nome: ", i+1);
    fgets(dados[i].nome, 42, stdin);
    dados[i].identificador = 1 + (rand() % MAX_IDENTIFICADOR);
  }
}

void imprime(INDIVIDUO individuos[], int quantos){
  int i;
  puts("\nIndividuos\n===========================");
  for(i = 0; i < quantos; i++){
    printf("Nome: %sIdentificador: %d", individuos[i].nome, individuos[i].identificador);
    if (i != quantos - 1){
      puts("\n---------------");
    } else {
        puts("\n===========================");
    }
  }
}

INDIVIDUO * maiorIdentificador(INDIVIDUO dados[], int tam){
  int i, maiorValor;
  int indiceMaior = 0;
  maiorValor = dados[0].identificador;
  for (i = 1; i < tam; i++){
    if (dados[i].identificador > maiorValor){
      maiorValor = dados[i].identificador;
      indiceMaior = i;
    }
  }
  return &dados[indiceMaior];
}
