#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define QTD 6000000

int main( void ) {
	int um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0, n;


	srand(time(NULL));

	for (int i = 0; i < QTD; i++){
		n = 1 + rand() % 6; 					//gera um número inteiro entre 1 e 6
	
		switch(n){
			case 1:
				um++;
				break;
			case 2:
				dois++;
				break;
			case 3:
				tres++;
				break;
			case 4:
				quatro++;
				break;
			case 5:
				cinco++;
				break;
			case 6:
				seis++;
				break;
			default:
				puts("o gerador retornou um número fora do intervalo entre 1 e 6");
				return(1);
		}

	}
	printf("1: %2.4f%%\n", (double)um/QTD*100);
	printf("2: %2.4f%%\n", (double)dois/QTD*100);
	printf("3: %2.4f%%\n", (double)tres/QTD*100);
	printf("4: %2.4f%%\n", (double)quatro/QTD*100);
	printf("5: %2.4f%%\n", (double)cinco/QTD*100);
	printf("6: %2.4f%%\n", (double)seis/QTD*100);
	return 0;
}
