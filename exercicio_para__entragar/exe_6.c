/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
        Construir um algoritmo que calcule e mostre sua média e, se a média>=6, emitir
        a mensagem “Aluno Aprovado”, caso contrário escreva a mensagem “Aluno
        Reprovado”! Dados para calcular a Nota do Semestre = ((prova1 * 2) + (prova2
        * 5) + (Listas 01 * 0,5) + (Listas 02 * 0,5) + (APS * 1) + (F.P.A. *0,5) + (F.P.M.
        *0,5)) /10
    */

    setlocale(LC_ALL, "Portuguese"); // habilita acentuação no console  
    
    float p1, p2, l1, l2;
    float aps, fpa, fpm;

    printf("Informe a Nota da Prova 1: ");  
    scanf("%f", &p1);

    printf("Informe a Nota da Prova 2: ");
    scanf("%f", &p2);

    printf("Informe a Nota das Listas 01: ");
    scanf("%f", &l1);

    printf("Informe a Nota das Listas 02: ");
    scanf("%f", &l2);

    printf("Informe a Nota do APS: ");  
    scanf("%f", &aps);

    printf("Informe a Nota do F.P.A.: ");
    scanf("%f", &fpa);      

    printf("Informe a Nota do F.P.M.: ");
    scanf("%f", &fpm);      

    float media = ((p1 * 2) + (p2 * 5) + (l1 * 0.5) + (l2 * 0.5) + (aps * 1) + (fpa * 0.5) + (fpm * 0.5)) / 10;

    printf("Sua Média: %.2f\n", media);     

    if(media >= 6){
        printf("Aluno Aprovado!\n");
    } else {
        printf("Aluno Reprovado!\n");
    }   
    return 0;
} 