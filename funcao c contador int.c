#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int par(int n1[])
{
    int i;
    int par = 0;

    for (i = 0; i < 6; i++)
    {
        if (n1[i] % 2 == 0)
        {
            par++;
        }
    }
    return par;
}

int impar(int n1[])
{
    int i;
    int impar = 0;

    for (i = 0; i < 6; i++)
    {
        if (n1[i] % 2 == 0)
        {
            impar++;
        }
    }
    return impar;
}

int main()
{

    int i, numero[6];

    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d° Numero: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("Quantidade numeros Par: %d\n",par(numero));
    printf("Quantidade numeros Impar: %d\n",impar(numero));


    return 0;
}