/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "Portuguese");    
    int codigo_cliente;
    float valor_compra, valor_desconto, valor_final;

    printf("Digite o código do cliente (1 - Regular, 2 - Premium, 3 - VIP): ");
    scanf("%d", &codigo_cliente);

    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);

    switch (codigo_cliente) {
        case 1:
            valor_desconto = valor_compra * 0.05;
            break;
        case 2:
            valor_desconto = valor_compra * 0.10;
            break;
        case 3:
            valor_desconto = valor_compra * 0.15;
            break;
        default:
            printf("Código de cliente inválido.\n");
            return 1; // Indica erro
    }

    if (codigo_cliente >= 1 && codigo_cliente <= 3) {
        valor_final = valor_compra - valor_desconto;
        printf("Valor final da compra após o desconto: R$ %.2f\n", valor_final);
    }

    return 0;
}