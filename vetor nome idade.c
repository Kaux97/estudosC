#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
  
  char nomes [5] [200];
  int tamanho = 5,vetor[tamanho];
  int i;

for (i = 0; i < tamanho; i++){
  printf("Digite o nome do %d usuario:", i +1);
  scanf("%s",&nomes[i]);

  printf("Digite sua idade:");
  scanf("%d",&vetor[i]);


}

system ("clear || cls");

for (i = 0;i < tamanho; i++){
  printf("Nomes: %s\n",nomes[i]);
  printf("Idades: %d\n",vetor[i]);
}


  
  
  return 0;
}