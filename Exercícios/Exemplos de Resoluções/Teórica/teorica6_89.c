#include<stdio.h>
#include<stdlib.h>
void leVetor(float *v, int tam);
float procuraMaior(float *v, int tam, int *vezes);
int main(void){
  float *v, maior;
  int i, tam, vezes;
  puts("Qual o tamanho do vetor? ");
  scanf("%d", &tam);
  v =  (float *) malloc(tam * sizeof(float));
  if (!v) return 1;
  leVetor(v, tam);
  maior = procuraMaior(v, tam, &vezes);
  printf("Maior = %f e aparece %d vezes. \n ", maior, vezes);
  free(v);
  return 0;
}

void leVetor(float *v, int tam){
  int i;
  for (i=0; i<tam; i++){
    printf("Elemento %d:", i);
    scanf("%f", v+i);
  }
}

float procuraMaior(float *v, int tam, int *vezes){
  int i;
  float maior;
  maior = v[0]; *vezes = 1;
  for (i=1; i<tam;i++){
    if(v[i]>maior){
      maior = v[i];
      *vezes = 1;
    }
    else if (maior == v[i]) *vezes=*vezes+1;
  }
  return maior;
}
