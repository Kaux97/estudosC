#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calculadora(float peso,float altura){ 
float calculo;
calculo = peso / (altura * altura);
return calculo;
} 

void mensagem(float calculo){
  char mensagem[200];
  if(calculo < 18.5){
    printf("Abaixo do peso\n");
    printf("Consulte um nutricionista para orientacao");
  }else if (calculo >= 18.5 && calculo < 24.9){
    printf("Peso normal\n");
    printf("Mantenha Habitos Saudaveis");
  }else if (calculo >= 25 && calculo < 29.9){
    printf("Sobrepeso");
    printf("Considere uma dieta balanceada");
  }else if(calculo >= 30 && calculo < 34.9){
    printf("Obesidade grau 1\n");
    printf("Procure uma orientacao profissional");
  }else if(calculo >= 35 && calculo < 39.9){
    printf("Obesidade grau 2");
    printf("Consulte um medico"); 
  }else if( calculo > 40){
    printf("Obesidade grau 3");
  }
  return;
}




int main(){

  float peso,altura;
  float imc;

  printf("Digite a sua altura ");
  scanf("%f",&altura);

  printf("Digite o seu peso atual: ");
  scanf("%f",&peso);

  imc = calculadora(peso,altura);

  printf("Valor do IMC: %.2f\n",imc); 
  mensagem(imc);

  


}