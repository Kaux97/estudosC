#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

  setlocale(LC_ALL,"portuguese");

  int escolha,idade,qtdfemi = 0,qtdsalario =0;
  float salario,mediasalario,somasalario;
  char sexo;
  
  do {

    printf("\nCódigp ||| DESCRIÇÃO");
    printf("\n1  |||  ADICIONAR PESSOA");
    printf("\n2  |||  SAIR E EXIBIR RESULTADOS");
    printf("\n SELECIONE O CODIGO: ");
    scanf("%d",&escolha);

    switch (escolha)
    {
      case 1:
      printf("Idade do Usuário: \n");
      scanf("%d",&idade);
      fflush(stdin);
      printf("Sexo do Usuário(a)   (M/F)\n");
      scanf("%c",&sexo);
      sexo = toupper(sexo);
      printf("Salário Atual: ");
      scanf("%f",&salario);
      
      somasalario += salario;
      qtdsalario++; 

      
      if (sexo == 'F' && salario == 5000)
      {
        qtdfemi++;
      }

      break;

      case 2:
     
      default:

      break;

    }
    } while (escolha != 2);
   
    mediasalario = somasalario / qtdsalario;


    printf("A média Salarial %.2f\n",&mediasalario);
    printf("Quantidade de mulheres acima dos 5k %d\n",&qtdfemi);



  return 0;
}