#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
     setlocale(LC_ALL, "portuguese");

char loginSalvo [100] = "Kaua";
char senhaSalva [100] = "kaua123";
char login [100]="";
char senha [100]="";

printf("Digite seu login: ");
gets(login);

printf("Digite seu senha: ");
gets(senha);


if (loginSalvo = login ) && (senhaSalva = login)
{
    printf("Login correto!!");
}
else
{
    printf("Login ERRADO!!");
}


return 0;

}
