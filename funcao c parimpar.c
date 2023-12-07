#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void parimpar(int n1){
  if(n1 % 2 == 0){
    printf("Numero par");
  }else{
    printf("Numero Impar ");
  }
} 



int main(){

  int numero;
  
  printf("Digite um numero: ");
  scanf("%d",&numero);

  parimpar(numero);
  
  
  return 0;
}