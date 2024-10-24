/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
        Faça um programa que leia um número inteiro e verifica apenas se esse
        número é maior que 5.
    */

   float num;

    printf("Informe um número: ");
    scanf("%f",&num);

    if(num>5){
        printf("o seu número é maior que 5.");
    }else if(num == 5){
        printf("seu número é 5");
    }else{
        printf("seunumero é menor que 5");
    }

    return 0;
} 