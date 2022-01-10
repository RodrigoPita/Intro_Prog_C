#include<stdio.h>
int main ( void ){
	int colunas;
	printf("Entre com um número positivo \n");
	scanf("%d", &colunas);

	while(colunas-->0){
		printf("*");
	}
	printf("\n");	
	return 0;
}
