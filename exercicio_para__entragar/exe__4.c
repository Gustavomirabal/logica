/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
        Faça um programa que dado um número inteiro e positivo, verificar se ele é par
        ou ímpar
    */

   int num;
   
   printf("digite um número inteiro: ");
   scanf("%d",&num);

   if(num < 0){
    printf("insira um número inteiro e positivo");

   }else{
        if(num%2 == 0){
            printf("o número %d é par.",num);
        }else{
            printf("o número %dé impar.",num);
        }

   }

    return 0;
} 