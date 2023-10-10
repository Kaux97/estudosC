#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int n;

    printf("----CARDÁPIO----\n");
    printf("NÚMERO|        | PRATO\n:");
    printf("1     |        | Picanha\n");
    printf("2     |        | Lasanha\n");
    printf("3     |        | Strogonoff\n");
    printf("4     |        | Bife Acebolado\n");
    printf("5     |        | Pão com ovo\n");
    printf("Digite o Número do prato desejado: \n");
    scanf("%d", &n);

    system("clear || cls");
    switch (n)
    {
    case 1:
        printf("Prato escolhido : Picanha\n");
        printf("Valor: R$25.00 ");
        break;
    case 2:
        printf("Prato escolhido : Lasanha\n");
        printf("Valor: R$20.00");
        break;
    case 3:
        printf("Prato escolhido : Strogonoff\n");
        printf("Valor: R$18.00");
        break;
    case 4:
        printf("Prato escolhido : Bife Acebolado\n");
        printf("Valor: R$15.00");
        break;
    case 5:
        printf("Prato escolhido : Pão com Ovo\n");
        printf("Valor: R$5.00");
        break;
    default:
        printf("Opção Inválida!");
    }

    return 0;
}