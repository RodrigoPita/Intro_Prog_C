#include<stdio.h>
int main (void){
	int p1,p2,p3,s1,s2,s3;

	int somag,somam,somas;

  printf("Entre o primeiro angulo no formato ang,min,seg: \n");
	scanf("%d,%d,%d", &p1,&p2,&p3);

	printf("Entre o segundo angulo no formato ang,min,seg: \n");
	scanf("%d,%d,%d", &s1,&s2,&s3);

	somas = (p3+s3)%60;

	somam =  (p3+s3)/60+(p2+s2)%60;

	somag = (p2+s2)/60+p1+s1;

	printf("soma: %d %d %d \n", somag, somam, somas);
	
	return 0;
}
