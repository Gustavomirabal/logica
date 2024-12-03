#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    char mensagem[] = "não sei o que escrever";

    int i; 

    char vetor[5];

    printf("Digite uma palavra: \n");
    gets(vetor);

    for(i = 9; i >=0; i-- ){
        printf("%c", vetor[i]);
    }
    return 0;
}