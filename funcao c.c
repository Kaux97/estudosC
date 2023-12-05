#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h>

void cabecalho(){
  printf("\n=================================\n");
  printf("\t     SENAI");
  printf("\n=================================\n");
}

void limpaTela(){
  fflush(stdin);
  system("clear || cls");
}

int main () {
  char nome[200];
  int idade;

  cabecalho();

  printf("Digite um nome: ");
  gets(nome);
  limpaTela();
  cabecalho();
  printf("Digite uma idade: ");
  scanf("%d",&idade);

limpaTela();

cabecalho(); 

  printf("Nome do Usuario: %s\n",nome);
  printf("Idade do Usuario: %d\n",idade);

  
  
  return 0;
}