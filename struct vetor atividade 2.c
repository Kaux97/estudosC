#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

  setlocale(LC_ALL,"portuguese");
  
  struct dados_livros{
    char nome[100];
    char autor[100];
    char cart[50];
    int valor;
  };
  int i;

  struct dados_livros livro[3];

  for(i=0;i<3;i++){
    printf("----Dados dos Livros----\n");
    printf("Digite o nome do Livro: ");
    gets(livro[i].nome);
    fflush(stdin);
    printf("Digite o Autor do Livro: ");
    gets(livro[i].autor);
    printf("Digite o valor do Livro: ");
    scanf("%d",&livro[i].valor);
    printf("Digite a cartegoria do Livro: ");
    scanf("%s",&livro[i].cart);
    fflush(stdin);
    system ("clear || cls");
   }

   printf("\n------LIVROS COMPRADOS------");
     for(i=0;i<3;i++){
      printf("\n||Nome do %d° Livro: %s",i+1,livro[i].nome);
      printf("\n||Nome do %d° Autor: %s",i+1,livro[i].autor);
      printf("\n||Preço do %d° Livro: %d",i+1,livro[i].valor);
      printf("\n||Cartegoria do %d° Livro: %s\n",i+1,livro[i].nome);
     }





  
  
  return 0; 
}