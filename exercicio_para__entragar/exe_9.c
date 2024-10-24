/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
       Simule um jogo de par ou ímpar com dois jogadores utilizando o
        mesmo computador, considere que o usuário 1 tenha escolhido par, e o
        usuário 2 tenha escolhido ímpar, leia dois números e determine quem
        ganhou a brincadeira.
    */

    setlocale(LC_ALL, "Portuguese"); // habilita acentuação no console  
    

    int num1, num2, soma, resultado, escolhaUsuario1, escolhaUsuario2;  
    
    printf("Escolha um número par: ");  
    scanf("%d", &num1); 
    
    printf("Escolha um número ímpar: ");    
    scanf("%d", &num2);     
    
    soma = num1 + num2;
    
    resultado = soma % 2;   
    
    printf("A soma dos números é: %d\n", soma);     
    
    if(resultado == 0){
        printf("O resultado da soma é par.\n");    
    } else {    
        printf("O resultado da soma é ímpar.\n");     
    }           
    
    printf("Escolha a sua escolha (par ou ímpar): ");
    scanf("%d", &escolhaUsuario1);  
    
    printf("Escolha a escolha do adversário (par ou ímpar): ");
    scanf("%d", &escolhaUsuario2);
    
    if(escolhaUsuario1 == escolhaUsuario2){
        printf("Empate!\n");
    } else if((escolhaUsuario1 == 0 && escolhaUsuario2 == 1) || (escolhaUsuario1 == 1 && escolhaUsuario2 == 0)){    
        printf("Você venceu!\n");    
    } else {
        printf("Você perdeu!\n");    
    }
    
    
    
    return 0;   
}