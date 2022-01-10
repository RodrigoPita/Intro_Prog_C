#include <stdio.h>
#include <string.h>

typedef struct _ALUNO{
  char nome[40];
  float n1, n2, media;
} ALUNO;

int main (void){
  ALUNO turma[4], temp;
  int jaOrdenados = 0, foraOrdem, i;

  for (i=0;i<4;i++){
    gets(turma[i].nome);
    scanf("%f", &turma[i].n1);
    do{}while (getchar()!='\n');
    scanf("%f", &turma[i].n2);
    do{}while (getchar()!='\n');
    turma[i].media=(turma[i].n1+ turma[i].n2)/2.0;
  }

  do{
    foraOrdem = 0;
    for (i = 0; i<4-1-jaOrdenados; i++){
      if(turma[i].media > turma[i+1].media){
        temp = turma[i];
        turma[i] = turma[i+1];
        turma[i+1] = temp;
        foraOrdem = 1;
      }
    }
    jaOrdenados++;
  } while (foraOrdem);

  for (i=0; i<4; i++){
    printf("\nDados do aluno %d\n", i);
    printf("%s: %0.1f, %0.1f, %0.1f\n", turma[i].nome, turma[i].n1, turma[i].n2,
      turma[i].media);
  }
  return 0;
}
