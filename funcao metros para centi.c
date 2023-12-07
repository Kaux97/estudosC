#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float centimetros(float n1){
return n1 * 100;
}



int main(){

    float numero;
    printf("Digite o valor em metros: ");
    scanf("%f",&numero);

    printf("Valor em metros: %.2f metros. \nEm centimetros: %.2f centimetros",numero,centimetros(numero));

    return 0;
}