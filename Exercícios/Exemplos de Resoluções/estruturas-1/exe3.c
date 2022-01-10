#include<stdio.h>
#include<math.h>

typedef struct _PONTO {
  float x, y;
} PONTO;

float distancia(PONTO alpha, PONTO beta){
  return sqrt(pow(alpha.x - beta.x, 2) + pow(alpha.y - beta.y, 2));
}

int main(void){
  PONTO p1, p2;
  printf("Entre com as coordenadas do ponto 1 (x y)\n");
  scanf("%f %f", &p1.x, &p1.y);
  printf("Entre com as coordenadas do ponto 2 (x y)\n");
  scanf("%f %f", &p2.x, &p2.y);

  printf ("A distancia entre os pontos eh: %.2f\n", distancia(p1, p2));


  return 0;
}
