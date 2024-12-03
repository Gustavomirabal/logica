/*
    nome: gustavo mirabal czarnotta
    ra: 02678098
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); 

    int num;
    
    printf("digite a sua idade: ");
    scanf("%d", &num);

   if(num >=0 && num < 12){
        printf("sai daqui seu catarrento");
    }else if (num >= 12 && num < 15){
        printf("pivete chato");
    }else if (num >= 15 && num < 18){
        printf("via dormir garoto");
    }else if (num >= 1845){
        printf("bora tomar uma ??");
    }else{
        printf("idede invalida");
    }

    return 0;   
}