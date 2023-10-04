#include <stdio.h> 
#include <stdlib.h>

int main() {

int n1,n2;
float media,soma,produto; 

    printf("Escreva um número: ");
    scanf(n1);

    printf("Escreva um número: ");
    scanf(n2);

    soma = n1 + n2;
    media = (n1 + n2)/2;
    produto = n1 * n2;



    printf("A soma dos números é de: \n", soma);
    printf("A média dos números é de: \n", media);
    printf("O produto dos números é de: \n", produto);


if (n1 > n2)
{
    printf("Maior número: \n", n1)
}
else if (n2 > n1) 
{
    printf("Maior Número: \n", n2)
}
else if (n2 < n1)
{
    printf("Menor Número: \n", n2)
}

{
 else 
    printf ("Menor Número: \n,", n1)
    
    }




}