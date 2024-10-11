#include <stdio.h>
int main(){
    float nota1, nota2, media;

    printf("informe a nota 1 : ");
    scanf("%f", &nota1);
    printf("informe a nota 2 : ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    if(media>=60){
        printf("sua media foi %f\n voce foi aprovado", media);
    }else{
        printf("sua media foi %f\n voce foi reprovado", media);
    }

    return 0;
}