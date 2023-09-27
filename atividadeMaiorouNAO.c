#include <stdio.h>
#include <stdlib.h>

int main()
{

    float n1;

    printf("Digite um numero: ");
    scanf("%f", &n1);

    if (n1 > 10)
    {
        printf("E maior que 10");
    }
    else
    {
        printf("E igual a 10");

        if (n1 <= 9)
        {
            printf("E menor que 10");
        }
    }

    return 0;
}
