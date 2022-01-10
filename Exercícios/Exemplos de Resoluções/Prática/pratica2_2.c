#include<stdio.h>
int main( void ) {
	int linhas;

	puts("Entre com o número desejado de linhas");
	scanf("%d", &linhas);
	for (int i = 0; i < linhas; i++){
		for(int j = 0; j < i+1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
