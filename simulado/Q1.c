/*
Nome: Gustavo Mirabal Czarnotta
RA: 26788098
*/

#include <stdio.h>

int main(){
    /*
        Programa de Conversão de Temperatura
Escreva um programa em C que peça ao usuário para digitar uma temperatura
em Celsius e converta essa temperatura para Fahrenheit.
A fórmula para a conversão é:
Para que você consiga converter de grau Celsius para Fahrenheit, basta
multiplicar a temperatura em graus Celsius por 1,8 e somar 32.
Veja o exemplo:
• 37º C para Fahrenheit:
• F = 37 x 1,8 + 32;
• F = 98,6;
o Entrada: Temperatura em Celsius (ex: 25)
o Saída: Temperatura em Fahrenheit (ex: 77)
    */

    float celsius; // declarar variavel
    float fahrenheit; // declarar variavel
    
    // pedir para o usuario digitar a temperatura em celsius
    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius); // ler a temperatura em celsius
    
    // calcular a temperatura em fahrenheit
    fahrenheit = celsius * 1.8 + 32;
    
    // mostrar a temperatura em fahrenheit
    printf("A temperatura %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", celsius, fahrenheit);
    
    return 0; // encerrar o programa com sucesso
}