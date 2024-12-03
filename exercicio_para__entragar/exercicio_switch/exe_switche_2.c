/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 
   /*Faça um programa que leia uma letra que represente a classificação de uma nota (A, B,
C, D ou F) e exiba uma mensagem indicando a qualidade da nota:
• A: "Excelente"
• B: "Bom"
• C: "Regular"
• D: "Ruim"
• F: "Reprovado"
Caso a letra seja inválida, exiba "Nota inválida".*/

    char letra;
    printf("Digite uma letra que classifique uma nota (A, B, C, D, E, F)");
    scanf("%c", &letra);
    
    switch(letra){
        case 'A':
            printf("Exelente\n");
            break;
        case 'B':
            printf("Bom\n");
            break;
        case 'C': 
            printf("Regular\n");
            break;
        case 'D':
            printf("Ruim\n");
            break;
        case 'E': 
            printf("Reprovado\n");
            break;
        case 'F':
            printf("reprovado\n");
            break;
        default:
            printf("Nota inválida\n");
            break;

    }
    


    return 0;   
}