#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    
setlocale(LC_ALL,"portuguese");

int num,qtdnum = 0,qtdposi = 0,soma =0;
int qtdnega = 0;
int qtdpar = 0,somapar = 0,qtdimpar = 0,somaimpar = 0;
int maior=0,menor = -9999,i = 0;
float mediaTotal,mediapar,mediaimpar;
int numero[5];

    do{

        printf("Digite N�meros Inteiros: ");
        scanf("%d",&num);

        if (num > 0) {
            qtdnum++;
            qtdposi++;
            numero[i] = num;
            i++;
            soma += numero[i];
        }else{
            qtdnum++;
            qtdnega++;
            numero[i] = num;
            soma += numero[i];
            i++;
        }     

         if(num % 2 ==0 ){
            qtdpar++;
            somapar += num;

         }else{
            qtdimpar++;
            somaimpar += num;
         }

         if(numero[i] > maior){
            maior = numero[i];
         }

         if(numero[i] < maior){
            maior = numero[i];
         }

    

    }while(i < 5);

    system("clear || cls");

    mediaTotal =soma / qtdnum;
    mediapar =somapar / qtdpar; 
    mediaimpar =somaimpar / qtdimpar; 


for(i = 5; i >= 0; i--){
    printf("Numeros selecionados: %d\n",numero[i]);
}
printf("\n------------------\n");
printf("Quantidade de N�meros Par: %d\n",qtdpar);
printf("Quantidade de N�meros Impar: %d\n",qtdimpar);
printf("Quantidade de N�meros Positivos: %d\n",qtdposi);
printf("Quantidade de N�meros Negativos: %d\n",qtdnega);
printf("\nMaior N�mero: %d\n",maior);
printf("Menor N�mero: %d\n",menor);
printf("\nM�dia Total dos N�meros:  %.1f \n",mediaTotal);
printf("M�dia Total dos N�meros Par: %.1f \n",mediapar);
printf("M�dia Total dos N�meros Impares: %.1f \n",mediaimpar);


    
    return 0;
}