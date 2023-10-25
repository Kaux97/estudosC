#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "portuguese");

int numero,contador;
float soma = 0,media;


  do
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);

if (numero > 0)
{
  soma += numero;
  contador++;
}



  } while (numero > 0);

  media = soma / contador;

  printf("Média informada: %.1f", media);

return 0;
}


