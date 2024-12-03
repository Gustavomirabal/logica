/*
Nome: Gustavo Mirabal Czarnotta
RA: 26788098
*/

#include <stdio.h>

int main(){
    /*
        Calculadora Simples (Utilizando If-Else)
Crie um programa em C que leia dois números inteiros e uma operação (somar,
subtrair, multiplicar, dividir) e exiba o resultado da operação. Use operadores
aritméticos e inclua uma condição para verificar se o divisor é zero, caso a
operação seja divisão.
o Entrada: Número 1, Número 2, Operação
o Saída: Resultado da operação
    */

   // declarando as variaveis

    int num1, num2;
    char operacao;

    // lendo os dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite a operacao (1 = soma (+), 2 = subtração (-), 3 = multiplicação (*), ): ");
    scanf(" %c", &operacao);
    
    // verificando a operacao
    
    
    return 0; // encerrar o programa com sucesso
}