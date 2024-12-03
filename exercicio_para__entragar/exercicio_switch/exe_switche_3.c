/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

  
  
void converter_moeda(int codigo_moeda, float valor_reais) {
    setlocale(LC_ALL, "Portuguese"); 
    float valor_convertido;

    switch (codigo_moeda) {
        case 1:
            valor_convertido = valor_reais / 5.78;
            printf("%.2f reais equivalem a %.2f dólares.\n", valor_reais, valor_convertido);
            break;
        case 2:
            valor_convertido = valor_reais / 6.29;
            printf("%.2f reais equivalem a %.2f euros.\n", valor_reais, valor_convertido);
            break;
        case 3:
            valor_convertido = valor_reais / 7.45;
            printf("%.2f reais equivalem a %.2f libras.\n", valor_reais, valor_convertido);
            break;
        case 4:
            valor_convertido = valor_reais * 171.33;
            printf("%.2f reais equivalem a %.2f pesos argentinos.\n", valor_reais, valor_convertido);
            break;
        default:
            printf("Código de moeda inválido.\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int codigo_moeda;
    float valor_reais;

    printf("Digite o código da moeda (1: Dólar, 2: Euro, 3: Libra, 4: Peso argentino): ");
    scanf("%d", &codigo_moeda);

    printf("Digite o valor em reais: ");
    scanf("%f", &valor_reais);

    converter_moeda(codigo_moeda, valor_reais);

    return 0;
}