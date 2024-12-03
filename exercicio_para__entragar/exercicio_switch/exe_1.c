/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 
   /*Crie um programa que leia um número de 1 a 7 e, usando switch, imprima o dia
correspondente da semana:
• 1 para Domingo
• 2 para Segunda-feira
• 3 para Terça-feira
• ...
• 7 para Sábado
Caso o número não esteja entre 1 e 7, exiba uma mensagem de erro. */

    int dia;
    
    printf("Digite um n�mero de 1 a 7: ");   
    scanf("%d", &dia);
    
    switch(dia){
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Tere�a-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sabado\n");
            break;
        default:
            printf("N�mero invalido! Digite um n�mero entre 1 e 7.\n");
    }
    


    return 0;   
}