#include<stdio.h>

typedef struct {
  char nome[40];
  float salario;
} EMPREGADO;

int main () {
  EMPREGADO temp, emp1;

  puts ("Entre com nome.");
  fgets(emp1.nome, 41, stdin);
  puts("Qual o salario?");
  scanf("%f", &emp1.salario);

  temp=emp1;

  printf("O salario de %s e %.2f\n", temp.nome, temp.salario);
  return 0;
}
