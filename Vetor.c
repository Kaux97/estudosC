#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main () {
    
    int numeros [5];

    printf("Digite o primeiro numero: ");
    scanf("%d",&numeros[0]);

    printf("Digite o segundo numero: ");
    scanf("%d",&numeros[1]);

    printf("Digite o terceiro numero: ");
    scanf("%d",&numeros[2]);
    
    printf("Digite o Quarto numero: ");
    scanf("%d",&numeros[3]);
    
    printf("Digite o Quinto numero: ");
    scanf("%d",&numeros[4]);

    printf("\nExibindo os numeros digitados...\n");


    printf("Primeiro n�mero: %d \n", numeros[0]);
    printf("Segundo n�mero: %d \n", numeros[1]);
    printf("Terceiro n�mero: %d \n", numeros[2]);
    printf("Quarto n�mero: %d \n", numeros[3]);
    printf("Quinto n�mero: %d \n", numeros[4]);




    
    return 0;
}



