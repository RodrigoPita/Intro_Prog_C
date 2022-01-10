#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define QTD 1000000

int main( void ) {
	int total_pares=0, total_impares=0, n;


	srand(time(NULL));

	for (int i = 0; i < QTD; i++){
		n = rand(); 					//gera um número inteiro entre 0 e RAND_MAX

		if (n % 2 == 0){ //par
			total_pares++;
		}else{
			total_impares++;
		}
	}
	printf("pares: %08.4f%%, ímpares: %08.4f%%\n", (double)total_pares/QTD*100, (double)total_impares/QTD*100);
	return 0;
}
