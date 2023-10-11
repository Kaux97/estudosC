#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int main()
{

    float altura, pesoI;
    char sexo;
    char nome[50];
    
    setlocale(LC_ALL, "portuguese");

    printf("Nome do Usuário(a): ");
    scanf("%s", &nome);
    
    fflush(stdin);
    
    printf("Sexo do Usuário(a) M ou F: ");
    scanf("%c", &sexo);

    printf("Altura do Usuário(a): ");
    scanf("%f", &altura);

sexo = toupper(sexo);

    switch (sexo)
    {
    case 'M':
        pesoI = (72.7 * altura) - 58;
        break;
    case 'F':
        pesoI = (62.1 * altura) - 44.7;
        break;
    default:
        printf("Opção Inválida");
    }

    printf("O peso ideal do Usuário(a): %.2f", pesoI);

    return 0;
}