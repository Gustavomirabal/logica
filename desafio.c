/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 

    float num;
    
    printf("digite a sua idade: ");
    scanf("%f", &num);

   if(num < 0){
        printf("seu numero é menor que zero");
   }else if(num == 0){
        printf("seu numero é zero");
   }else{
        printf("seu numero é maior que zero");
   }

    return 0;   
}