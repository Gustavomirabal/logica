/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 
   /*Crie um programa que solicite ao usuário uma senha e verifique, em um
    loop WHILE, se a senha está correta. Se não estiver, continue solicitando
    até que o usuário insira a senha correta.*/

    char senha[10], entrada[10];

    printf("digite sua senha: ");
    scanf("%s", senha);

    while(1){
        printf("digite a senha: ");
        scanf("%s", entrada);
        
        if(strcmp(senha, entrada) == 0){
            printf("senha correta!\n");
            break;
        } else {
            printf("senha incorreta!\n");
        }
    }
    return 0;   
}