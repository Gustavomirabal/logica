/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
       Faça um programa que leia dois números e imprima na tela o maior
        número.
    */

    setlocale(LC_ALL, "Portuguese"); // habilita acentuação no console  
    
    int num1, num2; 
    
    printf("Digite o primeiro número: ");   
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");    
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O maior número é %d.\n", num1);
    } else {
        printf("O maior número é %d.\n", num2);
    }
    
    return 0;
} 