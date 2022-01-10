char c;
char frase[80];
int vezes;

/* ... */

gets(frase);
c = 'a';
vezes = quantasVezes(frase, c);
printf("O caracter %c apareceu %d vezes \n", c, vezes);

/* ... */
