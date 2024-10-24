/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
       Faça um programa que leia um número inteiro digitado pelo usuário e imprima
        na tela se esse número é múltiplo de 7 ou não.
    */

    setlocale(LC_ALL, "Portuguese"); // habilita acentuação no console  
    
    int numero;
    
    printf("Digite um número inteiro: ");   
    scanf("%d", &numero);   
    
    if(numero % 7 == 0){    
        printf("%d é múltiplo de 7.\n", numero);
    }else{
        printf("%d não é múltiplo de 7.\n", numero);
    }   
    
    return 0;   
}