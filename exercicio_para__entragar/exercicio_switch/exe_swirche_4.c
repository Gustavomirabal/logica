/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra); // O espaço antes de %c ignora espaços em branco

    switch (letra) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("A letra %c é uma vogal.\n", letra);
            break;
        default:
            printf("A letra %c é uma consoante.\n", letra);
    }

    return 0;
}