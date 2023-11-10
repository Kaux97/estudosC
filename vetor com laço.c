#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){
    
    
    int tamanho = 3;
    int numeros[tamanho];
    int i;

    for(i = 0; i < tamanho; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numeros[i]);
    } 

    printf("\n EXIBINDO OS NÚMEROS DIGITADOS...\n");

    for(i = 0; i < tamanho; i++){
        printf("%d° números: %d \n", i + 1, numeros[i]);
    }
    
    
    return 0;
}