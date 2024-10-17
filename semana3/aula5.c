/*
    nome; Gustavo Mirabal Czarnotta
    RA: 02678098
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "portuguese-brazilian");

    char letra01, letra02, letra03;

    printf("insira um caractere: ");
    scanf("%c",&letra01);
    
    printf("insira outro caractere: ");
    scanf(" %c",&letra02); // colocar o espaço para que o programa não leia o enter 

    printf("insira outro caractere: ");
    scanf(" %c",&letra03); // colocar o espaço para que o programa não leia o enter 

    printf("você digitou '%c' e '%c' e '%c' ",letra01, letra02, letra03);
    
    return 0;
}