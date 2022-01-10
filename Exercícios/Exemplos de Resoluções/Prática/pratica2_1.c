#include<stdio.h>
int main( void ) {
	int linhas, colunas;

	puts("Entre com o número desejado de linhas e colunas (separados por vírgula)");
	scanf("%d, %d", &linhas, &colunas);
	for (int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
