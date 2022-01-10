#define DIM 10
#include<stdio.h>

int main( void ){
	int i = 0;
	float f=3.0;
	char c='a';
	int v[DIM];

	printf("Tamanho de int: %d\n", (int) sizeof (i));
	printf("Tamanho de float: %d\n", (int) sizeof f);
	printf("Tamanho de double: %ld\n", sizeof (double));

	printf("Tamanho do char: %ld\n", sizeof c);
	printf("Tamanho do vetor de %d inteiros: %ld\n", DIM, sizeof(v));

	return 0;
}
