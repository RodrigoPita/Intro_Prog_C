#include<stdio.h>

int main (void){

	float primeira = 0.5f;
	double segunda = 2.6;
	long double terceira = 3.7L;

	printf("primeira_normal: %f\n", primeira); 
	printf("segunda_normal: %f\n", segunda); 
	printf("terceira_normal: %Lf\n\n", terceira);

	printf("primeira_cientifica: %E\n", primeira); 
	printf("segunda_cientifica: %E\n", segunda); 
	printf("terceira_cientifica: %E\n", terceira);
	return 0;
}
