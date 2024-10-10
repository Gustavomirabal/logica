/*
    nome: gustavo mirabal czarnotta
    RA: 2678098
*/
#include <stdio.h>
int main(){

    int x, y, soma,sub,div,mult; // delcarar variaveis 

    //entrada de dados 
    printf("informe um valor: \n");
    scanf("%i",&x);
    printf("informe um valor: \n");
    scanf("%i",&y);

    // variaveis 
    soma = x + y; // somar
    sub = x - y; // subtração
    div = x / y; // divisão
    mult = x * y; // multiplicação

    // mostrar os resultados
    printf("O resultado da soma e : %i\n",soma);
    printf("O resultado da subtracao e : %i\n",sub);
    printf("O resultado da multiplicacao e : %i\n",mult);
    printf("O resultado da divisao e : %i\n",div);
    
    return 0;
}
