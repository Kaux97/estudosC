#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int idade;
    char nome[500] = "";
    float peso;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);

   printf("Nome do Usuario %s \n", nome); 
   printf("Idade do Usuario %d \n", idade);
   printf("Peso do Usuario %.1f \n", peso);

    return 0;
}
 