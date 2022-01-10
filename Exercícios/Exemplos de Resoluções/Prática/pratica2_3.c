#include<stdio.h>
int main( void ) {
	int linhas;

	puts("Entre com o número desejado de linhas");
	scanf("%d", &linhas);
	for (int i = linhas; i > 0; i--){
		for(int j = 0; j < i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
