#include <stdio.h>
#include <stdlib.h>

int main () {

float nota1,nota2,media;


printf("Digite a primeira nota : ");
scanf("%f", &nota1);
printf("Digite a segunda nota : ");
scanf("%f", &nota2);

media = (nota1 + nota2) / 2;
system("cls");
printf("Primeira nota do aluno: %.1f\n", nota1);
printf("Segunda nota do aluno: %.1f\n", nota2);
printf("Media do aluno: %.1f\n", media);

if (media >= 7)
{
    printf("Aprovado!");
}
else
{
    printf("Reprovado!");
}

return 0;

}

