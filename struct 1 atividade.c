#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  struct dados_usua{
    char nome[50];
    int idade;
    float peso;
    float altura;

  };
  struct dados_usua dados;

  printf("----Dados----\n");
  printf("Digite o nome do Usuario: \n");
  gets(dados.nome);
  printf("Digite a idade do Usuario: \n");
  scanf("%d",&dados.idade);
  printf("Digite o peso do Usuario: \n");
  scanf("%f",&dados.peso);
  printf("Digite a altura do Usuario: \n");
  scanf("%f",&dados.altura);

  system("clear || cls");

  printf("\n----Exibindo Dados----\n");
  printf("\nNome do Usuario: %s",dados.nome);
  printf("\nIdade do Usuario: %d",dados.idade);
  printf("\nPeso do Usuario: %.1f",dados.peso);
  printf("\nAltura do Usuario: %.2f",dados.altura);


  
  
  return 0;
}

