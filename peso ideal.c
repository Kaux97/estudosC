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

    printf("Nome do Usu�rio(a): ");
    scanf("%s", &nome);
    
    fflush(stdin);
    
    printf("Sexo do Usu�rio(a) M ou F: ");
    scanf("%c", &sexo);

    printf("Altura do Usu�rio(a): ");
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
        printf("Op��o Inv�lida");
    }

    printf("O peso ideal do Usu�rio(a): %.2f", pesoI);

    return 0;
}