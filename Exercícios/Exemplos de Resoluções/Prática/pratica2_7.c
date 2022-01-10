#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define QTD 9999999

int main( void ) {
	int dentro=0;
	double x,y;

	srand(time(NULL));

	for (int i = 0; i < QTD; i++){
		x = rand() / (RAND_MAX*1.0); 				
		y = rand() / (RAND_MAX*1.0);
		//printf("%f, %f\n", x, y);
		if (x*x + y*y <= 1.0){
			dentro++;
		}

	}
	printf("%02.6f\n", 4.0*dentro/QTD);
	return 0;
}
