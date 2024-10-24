/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
        Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo
        que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) – 58.
    */

    setlocale(LC_ALL, "portuguese-brazilian");

    float altura, peso_ideal;

    printf("Qual sua altura: ");
    scanf("%f",&altura);

    peso_ideal = (72.7*altura)-58;

    printf("seu peso ideal: kg %f",peso_ideal);
    return 0;
}