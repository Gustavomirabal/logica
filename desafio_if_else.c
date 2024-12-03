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
        Crie um programa em C que funcione como uma calculadora simples para somar, subtrair, multiplicar ou dividir dois números. O programa deve:
    */
   float n1, n2, resultado;
   char op;

   // Solicitar ao usuário o primeiro número.
   printf("digite um numero: ");
   scanf(" %f", &n1);
   
   //  Solicitar o operador desejado (+, -, *, /).
   printf("digite um operador (+, -, *, /): ");
   scanf(" %c", &op);

   // Solicitar ao usuário o segundo número.
   printf("digite um numero: ");
   scanf(" %f", &n2);

   if(op == '+'){
        resultado = n1 + n2;
   }else if(op == '-'){
        resultado = n1 - n2;
   }else if(op == '*'){
        resultado = n1 * n2;
   }else if (op == '/'){
        if(n2 == 0){
          printf("Error, não da para dividir por zero");
           return 0; 
        }else{
          resultado = n1 / n2;
        }
   }if(op !='+' && op != '-' && op != '*'&& op != '/'){
          printf("voce selecionou um operador invalido!");
   }else{
        printf("O resultado e: %f", resultado);
   }


    return 0;   
}