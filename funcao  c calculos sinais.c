 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

int soma(int n1,int n2){
  int resultado;
  resultado = n1 + n2;
  return resultado;
}

int subtracao(int n1,int n2){
    int resultado;
    resultado = n1 - n2;
    return resultado;
}
 
int divisao(int n1,int n2){
    int resultado;
    resultado = n1 / n2;
    return resultado;
}

int multi(int n1,int n2){
    int resultado;
    resultado = n1 * n2;
    return resultado;
}

 int main(){

    int numeroUm,numeroDois;

    printf("Digite o 1 Numero : ");
    scanf("%d",&numeroUm);

    printf("Digite o 2 Numero : ");
    scanf("%d",&numeroDois);

system("clear || cls");

printf("Soma: %d\n",soma(numeroUm,numeroDois)); 
printf("Subtracao: %d\n",subtracao(numeroUm,numeroDois)); 
printf("Divisao: %d\n",divisao(numeroUm,numeroDois)); 
printf("Multiplicacao: %d\n",multi(numeroUm,numeroDois)); 




    
    return 0;
 }