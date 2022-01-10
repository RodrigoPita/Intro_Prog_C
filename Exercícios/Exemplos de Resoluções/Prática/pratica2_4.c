#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main( void ) {
	int i, n;
	int max = 100;

	/* srand inicia o gerador de números aleatórios
	 			só precisa aparecer uma vez no início do programa

	 time(NULL) retorna o número de segundos desde 01/01/1970

	 srand deve receber um inteiro para iniciar o gerador de números randômicos
	   	costuma-se usar o número de segundos fornecido por time(NULL)
	*/

	srand(time(NULL));
	//srand(11);
	printf("RAND_MAX: %d\n", RAND_MAX);
	for (i = 0; i < 10; i++){
		n = rand(); 					//gera um número inteiro entre 0 e RAND_MAX
		n = n % max;					//passa este número para o intervalo [0,max]
		printf("%d\n",n);
	}
	return 0;
}
