#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cabecalho(){
  printf("====================\n");
  printf("\tSENAI\n");
  printf("====================\n");
  
}

void mostrarTabuada(int n1){
  int i;
  for(i=1;i<=10;i++){
    printf("%d x %d = %d \n", n1, i, n1 * i);
  }
}

int main(){

  int numero;
  
  cabecalho();
  printf("Digite um numero: ");
  scanf("%d",&numero);

  system("clear || cls");

  cabecalho();
  mostrarTabuada(numero);


  
  
  
  return 0;
}