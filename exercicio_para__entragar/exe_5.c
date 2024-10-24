/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
        Faça um programa que dado um número inteiro, verificar se ele é maior ou
        menor ou igual a zero.
    */

    setlocale(LC_ALL, "Portuguese"); // habilita acentuação no console  

    int num;
    
    printf("digite um número ");
    scanf("%d",&num);

    if(num > 0){
        printf("O número %d é maior que zero.",num);
    }else if(num < 0){
        printf("O número %d é menor que zero.", num);   
    }else{
         printf("O número é igual a zero.");
    }
    return 0;
} 