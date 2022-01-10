#include<stdio.h>
int main ( void ){
  char c;
  c = getchar();
  while (!feof(stdin)){
    putchar(c);
    c = getchar();
  }
  
  return 0;
}
