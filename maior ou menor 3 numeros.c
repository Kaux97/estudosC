#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

setlocale(LC_ALL,"portuguese");


int n1,n2,n3;
int maior,menor;

printf("Digite o primeiro número: ");
scanf("%d",&n1);

printf("Digite o segundo numero: ");
scanf("%d",&n2);

printf("Digite o terceiro numero: ");
scanf("%d",&n3);

maior = n1 > n2 ? n1 : n2;
maior = maior > n3 ? maior : n3;

menor = n1 < n2 ? n1 : n2;
menor = menor < n3 ? menor : n3;

system("cls || clear");

printf("Maior número: %d \n", maior);
printf("Menor número: %d \n", menor);

    return 0;
}