#include <stdlib.h>
#include <stdio.h>

#define BIGCHUNCK 1000000 // 1 MB

int main(void) {
  char *nada;
  long long int count=1;
  while(1){
    nada = malloc(count*BIGCHUNCK);
    if (nada == NULL){
      printf("Foi possível alocar %Ld MB de memoria.\n", count);
      break;
    }
    free(nada);
    count++;
  }
  free(nada);
  return 0;
}
