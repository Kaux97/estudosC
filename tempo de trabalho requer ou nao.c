#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"portuguese");

int numerotra,anoidade,idade,tempotrabalho;


printf("C�digo do Empregado: ");
scanf("%d",&numerotra);

printf("Ano do Nascimento: ");
scanf("%d",&anoidade);

printf("Tempo de Trabalho: ");
scanf("%d",&tempotrabalho);

idade = 2023 - anoidade;

system("cls || clear");

printf("\n----DADOS DO FUNCION�RIO----\n");
printf("C�digo do Empregado: %d\n", numerotra);
printf("Idade : %d anos\n", idade);
printf("Tempo de Trabalho: %d anos\n", tempotrabalho);

if (idade > 65 || tempotrabalho > 30) {

     printf("Requerer Aposentadoria \n");
}else{
    printf("N�o Requerer Aposentadoria\n");
}

 
   
   return 0;
}



