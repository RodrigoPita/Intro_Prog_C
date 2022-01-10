#include<stdio.h>

#define ALTURA 10
#define LARGURA 10

int moveEsquerda(int x);
int moveDireita(int x);
int moveCima(int x);
int moveBaixo(int x);

int main (void){
  int px = 0, py = 0;
  char ordem;
  int continua = 1;

  while (continua){
    __fpurge(stdin);
    ordem = getchar();
    switch (ordem) {
      case 'a': case 'A':
        px = moveEsquerda(px);
        break;
      case 'd': case 'D':
        px = moveDireita(px);
        break;
      case 'w': case 'W':
        py = moveCima(py);
        break;
      case 'x':  case 'X':
        py = moveBaixo(py);
        break;
      case 'q' : case 'Q':
        continua = 0;
        break;
      default:
        puts("Opção inválida");
    }
    printf("Estou em %d %d\n", px, py);
  }
  return 0;
}

int moveEsquerda(int x){
  return (x > 0)? --x : x;
}
int moveDireita(int x){
  if (x < LARGURA){
    x++;
  }
  return x;
}

int moveCima(int y){
  return (y < ALTURA)? ++y : y;
}

int moveBaixo(int y){
  return (y > 0)? --y : y;
}
