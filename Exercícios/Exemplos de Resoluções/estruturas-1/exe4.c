#include<stdio.h>
#include<math.h>
#include<string.h>

typedef struct _PONTO {
  float x, y;
} PONTO;

typedef struct _CIRCUNFERENCIA {
  float raio;
  PONTO centro;
} CIRCUNFERENCIA;

float distancia(PONTO alpha, PONTO beta){
  return sqrt(pow(alpha.x - beta.x, 2) + pow(alpha.y - beta.y, 2));
}

int ehContido(PONTO p, CIRCUNFERENCIA c){
  return (distancia(p, c.centro) > c.raio)? 0 : 1;
}

int main (void){
  CIRCUNFERENCIA c1;
  PONTO p1;
  char *sim = "estah";
  char *nao = "nao estah";
  char *resp;

  printf("Entre com o raio do circulo c1 \n");
  scanf("%f", &c1.raio);
  printf("Entre com as coordenadas do centro do circulo c1\n");
  scanf("%f %f", &c1.centro.x, &c1.centro.y);

  printf("Entre com as coordenadas do ponto 1 (x y)\n");
  scanf("%f %f", &p1.x, &p1.y);

  printf("Dados lidos\n");

  printf("Circulo c1: raio = %f, x = %f, y = %f\n", c1.raio, c1.centro.x, c1.centro.y);
  printf("Ponto 1: x = %f, y = %f\n", p1.x, p1.y);

  resp = (ehContido(p1, c1))? sim : nao;

  printf("O ponto p1 %s contido em c1\n", resp);

  return 0;
}
