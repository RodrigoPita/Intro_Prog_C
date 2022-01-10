#include<stdio.h>

double pi (int termos);

int main(void){
  int nTermos;
  puts("Entre com o número de termos");
  scanf("%d", &nTermos);
  printf("Pi: %09.6f\n", pi(nTermos));
}

double pi(int termos){
  double partial = 1;
  int i,j;
  for (i = 2, j = 3; i <= termos; i++, j+=2){
    if (i % 2 == 0){
        partial -= 1.0f/j;
    } else {
      partial += 1.0f/j;
    }

  }
  return 4*partial;
}
