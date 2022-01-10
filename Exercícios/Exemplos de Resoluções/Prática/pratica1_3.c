/*
* compilar com gcc xxxx -lm
* testar com 153,370,371,407
*/
#include<stdio.h>
#include<math.h>

int main (void){
	int entrada, centenas, dezenas, unidades;

	printf("entre com um numero entre 100 e 999:\n");
	scanf("%d", &entrada);

	centenas = entrada / 100;
	dezenas = entrada % 100; //intermediario
	unidades = dezenas % 10;
	dezenas = dezenas / 10; //definicao final

	printf("centenas: %d \ndezenas: %d \nunidades: %d\n", centenas,dezenas, unidades);

	printf("amigo: %d\n", (int)( pow(centenas,3)+pow(dezenas,3)+pow(unidades,3) ));

	return 0;
}
