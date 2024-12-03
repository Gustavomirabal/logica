/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 
   /*Escreva um programa que leia um número inteiro N informado pelo
    usuário e use o loop WHILE para calcular a soma de todos os números
    de 1 até N*/

    int n, soma = 0,i=1;

    printf("digite um numero inteiro: ");
    scanf("%d",&n);

    while(i<=n){
        soma += i;
        printf("%d\n", soma);
        i++;

    }
    return 0;   
}