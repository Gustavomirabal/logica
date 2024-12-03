#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    char palavra[]="Olá, mundo!";
    printf("Mensagem: %s\n", palavra);

    return 0;
}