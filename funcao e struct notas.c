#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados_aluno{
  char nome[50];
  float notas[3];
  float media ;
};

float verificarMedia(float notas[]){
  int i;
  float somaNotas = 0,media;
  for(i=0;i<3;i++){
    somaNotas += notas[i];
  }
  media = somaNotas / i;
  return media;

}

int main (){

struct dados_aluno dados;
int j,i;
float media;

  
  printf("Digite o nome do aluno: ");
  gets(dados.nome);

  for(i=0;i<3;i++){
    printf("Digite a %d° nota: ",i+1);
    scanf("%f",&dados.notas[i]);
  }
 
  printf("Media: %.1f",verificarMedia(dados.notas));
  
  return 0;
}