/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 
    /*
        Escrever um programa que exiba os números de 1 a 10 usando o loop
        WHILE.
     */

    int i = 1;

    while(i<=10){
        printf("%d\n",i);
        i++;
    }

    return 0;   
}