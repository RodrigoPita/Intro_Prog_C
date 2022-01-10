#include<stdlib.h>
#include<stdio.h>

int main (void){
  int i, n, *pvetor;
  float aux;

  /* define um valor para n, scanf ou n = */
  puts("Entre o tamanho de n.");
  scanf("%d", &n);

  /* aloca espaço na memória */
  pvetor = (int *) malloc (n * sizeof(int));
  if (!pvetor){
    puts("Sem memória.");
    return 1;
  }

  /* A PARTIR DE AGORA VOLTAMOS PARA VETORES COMUNS */
  /* aqui usamos pvetor, vamos ler o vetor */
  for (i=0; i<n; i++){
    printf("Entre elemento %d: ", i);
    scanf("%d", &pvetor[i]);
  }

  /* fazemos alguma coisa */
  aux = 0.0;
  for (i = 0; i < n; i++){
    aux += pvetor[i];
  }
  printf ("media: %f\n", aux/n);

  /* aqui não precisamos mais de pvetor */
  free(pvetor);
  return 0;
}
