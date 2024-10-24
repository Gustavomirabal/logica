/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
    Faça um programa que pergunte quanto você ganha por hora e o número de
    horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido
    mês 
    */

    setlocale(LC_ALL, "portuguese-brazilian");

    float horaganha, horatrabalho, salariio;

    printf("Quanto você ganha por hora: ");
    scanf("%f", &horaganha);

    printf("numero de horas que você trabalha por mês: ");
    scanf("%f", &horatrabalho); 

    salariio = horaganha*horatrabalho;

    printf("seu salario do mês é: R$ %.2f\n", salariio);

    return 0;
}