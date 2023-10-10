#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
    setlocale(LC_ALL,"portuguese");

    int quantidade;
    float preco,soma;

    printf("Digite a quantidade das maçãs: ");
    scanf("%d", &quantidade);

    if (quantidade < 12){
        preco = 1.30;
    }else{
        preco = 1.00;
    }

    soma = quantidade * preco;

     printf("\n ----NOTA DA COMPRA----\n");
     printf("Total de Maçãs compradas: %d\n",quantidade);
     printf("Custo Total das compras: %.2f\n",soma);    
    return 0;
}