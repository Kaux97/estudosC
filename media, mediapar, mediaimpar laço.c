#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "portuguese");

  int numero, contador = 0, contadorpar = 0, contadorimpar = 0;
  float soma = 0, media, mediapar, somapar = 0,mediaimpar,somaimpar = 0;

  do
  {
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
      if (numero % 2 == 0)
      {
        contadorpar++;
        somapar += numero;
      }else{ 
        
        contadorimpar++;
        somaimpar += numero;

      }
    

    }

    if (numero > 0)
    {
      soma += numero;
      contador++;
    }

  } while (numero > 0);

  media = soma / contador;
  mediapar = somapar / contadorpar;
  mediaimpar = somaimpar / contadorimpar;

  system("clear || cls");

  printf("Média informada: %.1f\n", media);
  printf("Média de numeros Pares: %.1f\n", mediapar);
  printf("Média de numeros Impar: %.1f\n", mediaimpar);
  printf("Quantidades de numeros Pares: %.1d\n", contadorpar);
  printf("Quantidades de numeros Impar: %.1d\n", contadorimpar);

  return 0;
}
