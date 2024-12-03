#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    char mensagem[] = "não sei o que escrever";

    puts(mensagem);
    return 0;
}