#include<stdio.h>
int main(void){
	int colunas;
	printf("Entre com um número positivo \n");
	scanf("%d", &colunas);
	
	if (colunas < 0){
		printf("Valor inválido.\n");
		return 1;
	}
		

	while(colunas-->0){
		printf("*");
	}
	printf("\n");	
	
	return 0;
}
