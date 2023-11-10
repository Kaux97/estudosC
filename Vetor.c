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


    printf("Primeiro número: %d \n", numeros[0]);
    printf("Segundo número: %d \n", numeros[1]);
    printf("Terceiro número: %d \n", numeros[2]);
    printf("Quarto número: %d \n", numeros[3]);
    printf("Quinto número: %d \n", numeros[4]);




    
    return 0;
}



