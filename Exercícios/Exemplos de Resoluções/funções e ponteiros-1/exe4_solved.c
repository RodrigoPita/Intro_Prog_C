#include<stdio.h>

long double * soma2Numeros(long double *a, long double *b);

long double resposta;

int main(void){
  long double primeiro, segundo;

  while (1){
    puts("Entre com dois números reais separados por um espaço");
    scanf("%Lf %Lf", &primeiro, &segundo);
    printf("Soma: %Lf\n", *soma2Numeros(&primeiro, &segundo));
  }
  return 0;
}

long double * soma2Numeros(long double *a, long double *b){
  //long double *r;
	//long double resposta;  
	resposta = *a + *b;
  //r = &resposta;
  return &resposta;
}
