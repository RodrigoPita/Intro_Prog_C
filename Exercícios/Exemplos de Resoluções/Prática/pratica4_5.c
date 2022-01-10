#include<stdio.h>
#define DIM 81

void criptografa(char frase[]);
void decriptografa(char frase[]);

int main(void){
    char frase[81];
    puts("Entre com a frase");
    scanf("%80[0-9a-zA-Z ]s", frase);
    criptografa(frase);
    decriptografa(frase);
    return 0;
}

void criptografa(char frase[]){
  for(int i = 0; frase[i] != '\0'; i++){
    if(frase[i] == 'Z'){
      frase[i] = 'A';
    } else if (frase[i] == 'z'){
      frase[i] = 'a';
    } else if ((frase[i]>=65 && frase[i]<90) || (frase[i]>=97 && frase[i]<122)){
      frase[i] = frase[i] + 1;
    }
  }
  puts(frase);
}


void decriptografa(char frase[]){
  for(int i = 0; frase[i] != '\0'; i++){
    if(frase[i] == 'A'){
      frase[i] = 'Z';
    } else if (frase[i] == 'a'){
      frase[i] = 'z';
    } else if ((frase[i]>65 && frase[i]<=90) || (frase[i]>97 && frase[i]<=122)){
      frase[i] = frase[i] -1;
    }
  }
  puts(frase);
}
