#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {

    setlocale(LC_ALL,"portuguese");

    int qtdParc,forma;
    float valorP,desconto,valordes,valorParc;

    
    
    printf("-------CARRINHO-------\n");
    printf("Digite o valor do produto desejado:");
    scanf("%f",&valorP);
    printf("Forma de Pagamento:\n ");
    printf("1- Pagamento � vista:\n ");
    printf("2- Pagamento � prazo: \n");
    printf("Digite a forma de pagamento:\n ");
    scanf("%f",&forma);
    


    switch (forma) { 
      case 1: 
        printf("Valor do produto : %f",valorP);
        printf("Forma de pagamento escolhida: %d",forma);
        desconto = valorP * 0.01;
        valordes = desconto - valorP;
        printf("Valor do desconto: %f",valordes);
        printf("Valor final do produto: %f",desconto);
        break;
      case 2: 
        printf("Valor do produto: %f",valorP);
        printf("Quantidade de parcelas: ");
        scanf("%d",&qtdParc);
        valorParc = valorP / qtdParc;
        printf("Valor por parcela: %f",valorParc);
        break;
        default:
        printf("Forma de pagamento Inv�lida");
    }   



    return 0;
}
