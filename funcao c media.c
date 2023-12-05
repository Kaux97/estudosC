#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float mediar(int n1,int n2){
  float resultado;
  resultado = (n1 + n2) / 2;
  return resultado;
}

int main() {

  int nu1,nu2;
  float media;

printf("Digite o Primeiro Numero: ");
scanf("%d",&nu1);
  
printf("Digite o Segundo Numero: ");
scanf("%d",&nu2);

media = mediar(nu1,nu2);

printf("Media: %.1f",media);
  
  
  return 0;
}