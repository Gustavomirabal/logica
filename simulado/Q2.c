/*
Nome: Gustavo Mirabal Czarnotta
RA: 26788098
*/

#include <stdio.h>

int main(){
    /*
        Escreva um programa em C que peça ao usuário para digitar uma temperatura
em Fahrenheit e converta essa temperatura para Celsius.
A fórmula para a conversão é:
o C= ((F-32)* 5)/9
o Onde C é a temperatura em graus Celsius e F, a temperatura em
Fahrenheit.
o Entrada: Temperatura em Fahrenheit (ex: 77)
o Saída: Temperatura em Celsius (ex: 25)
    */

    float fahrenheit; // variável para armazenar a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit); // ler a temperatura do usuário
    
    // realizar a conversão
    float celsius = (fahrenheit - 32) * 5 / 9;
    
    // imprimir a temperatura em Celsius
    printf("A temperatura em Celsius é: %.2f\n", celsius);
    
    // encerrar o programa
    printf("Programa encerrado.\n");
    
    return 0; // encerrar o programa com sucesso
}