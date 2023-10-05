#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
   setlocale(LC_ALL, "portuguese");

   char loginSalvo[160]= "Marta";
   char senhaSalvo[160]= "senai12";
   char login[160];
   char senha[160];

   printf("Digite o seu login: ");
   gets(login);

printf("Digite a sua senha: ");
   gets(senha);

if (strcmp(login,loginSalvo) == 0 && strcmp(senha,senhaSalvo) == 0 ){
    printf("Bem vindo!!");

}else{
    printf("Acesso Negado!!");
}

return 0;


}