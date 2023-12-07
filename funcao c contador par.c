#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>

void contador(int numero[]){
    int i;
    int par = 0;
    int impar = 0;

   for(i=0;i<6;i++){ 
    if (numero[i] % 2 == 0)
    {
        par++;
    }else{
        impar++;
    }
}
printf("Quantidades de Numeros Pares: %d\n",par);
printf("Quantidades de Numeros Impar: %d\n",impar); 
}
int main(){

 int i,numero[6];

 for(i=0;i<6;i++){
    printf("Digite o %d° Numero: ",i+1);
    scanf("%d",&numero[i]);
 }   
 contador(numero);
 
 return 0;
}