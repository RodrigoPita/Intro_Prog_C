#include<stdio.h>

int quantasVezes(char frase[], char procurado );

//limpando o buffer do teclado
// no windows fflush(stdin);
// no Linux __fpurge(stdin); //tem dois caracteres underscore

void flush_in(void);

int main(void){
  char c;
  char frase[80];
  //char vogais[] = "aeiouAEIOU";
  char vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int vezes;


  puts("Entre com a frase");
  gets(frase);
  // puts("Entre com o caracter para ser contado");
  // c = getchar();
  // __fpurge(stdin);
  // puts("Entre o segundo caracter");
  // c=getchar();
  for (int i; ; i++){
    if(vogais[i] == '\0'){
      break;
    }
    vezes = quantasVezes(frase, vogais[i]);
    printf("O caracter %c apareceu %d vezes \n", vogais[i], vezes);
  }


  return 0;
}

int quantasVezes(char frase[], char c){
  int i=0, vezes = 0;
  while(frase[i] != '\0'){
    if (frase[i] == c) {
      vezes++;
    }
    i++;
  }
  return vezes;
}

// ******************************************
// Nome: void flush_in
// Descrição: Função que "limpa" o teclado
// evitando problemas com a leitura de dados
// do tipo CHAR.
// Código baseado em exemplo de
// Marco Aurélio Stelmar Netto
// stelmar@pinus.cpad.pucrs.br
// ******************************************
void flush_in(){
   int ch;
   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}
