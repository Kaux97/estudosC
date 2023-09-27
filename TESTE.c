#include <stdio.h>
#include <stdlib.h>

int main()
{

    int idade;
    float peso;
    char sexo;
    char nome[1000] = "";

    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Informe o seu peso: ");
    scanf("%f", &peso);

    printf("Digite o genero : ");
    scanf("%c", &sexo);

    printf("Nome do usuario: \n", %s, nome);
    printf("Idade do usuario: $d \n", idade);
    printf("peso do usuario: $f \n", peso);
    printf("sexo do usuario: $c \n", sexo);

    return 0;
}