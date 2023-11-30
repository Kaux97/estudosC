#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
  struct dados_aluno{
    char nome[100];
    int idade;
    float notas[2];
  };
  int i,n;
  struct dados_aluno aluno[3];

  for(i=0;i<3;i++){
    printf("Digite o nome do Aluno: ");
    gets(aluno[i].nome);
    printf("Digite a idade do Aluno: ");
    scanf("%d",&aluno[i].idade);
      for(n=0;n<2;n++){
        printf("Digite a %d° Nota: ",n+1);
        scanf("%f",&aluno[i].notas[n]);
      }
      fflush(stdin);
      system("clear || cls"); 
  }

  for(i=0;i<3;i++){
    printf("Nome do %d° Aluno: %s\n",i+1,aluno[i].nome);
    printf("Idade do %d° Aluno: %d\n",i+1,aluno[i].idade);
     for(n=0;n<2;n++){
      printf("%d° Nota: %.1f\n",n+1,aluno[n].notas[n]);
     }
  }

  
  
  
  
  
  return 0;
}