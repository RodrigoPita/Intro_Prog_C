#include<stdio.h>
int main (void){
  float v[] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
  int i;

  for (i = 0; i < 7 ; i++){
    printf("%.1f ", v[i]);
  }
  printf("\n");
  for (i = 0; i < 7 ; i++){
    printf("%.1f ", *(v+i) );
  }
  printf("\n");
  return 0;
}
