#include <stdio.h>


int main(){
    
    int cont;
    double soma, soma2;
    for (cont = 10000 ; cont >= 1 ; cont--){
        
        if ( cont % 2 )
            soma += 1 / cont;
        else
            soma -= 1 / cont;
    }
    printf("soma = %f - direita -> esquerda\n", soma);


    soma = 0, cont = 0;
    for (cont = 1 ; cont <= 10000 ; cont++){
        
        if ( cont % 2 )
            soma += 1 / (double) cont;
        else
            soma -= 1 / (double) cont;
    }
    printf("soma = %f - esquerda -> direita\n", soma);


    soma = 0, soma2 = 0, cont = 0;
    for (cont = 1 ; cont <= 10000 ; cont++){
        
        if ( cont % 2 )
            soma += 1 / (double) cont;
        else
            soma2 -= 1 / (double) cont;
    }
    printf("\nsoma positivo = %f - esquerda -> direita\n", soma);
    printf("soma negativo = %f - esquerda -> direita\n", soma2);


    soma = 0, soma2 = 0, cont = 0;
    for (cont = 10000 ; cont >= 1 ; cont--){
        
        if ( cont % 2 )
            soma += 1 / (double) cont;
        else
            soma2 -= 1 / (double) cont;
    }
    printf("\nsoma positivo = %f - direita -> esquerda\n", soma);
    printf("soma negativo = %f - direita -> esquerda\n", soma2);

    return 0;
}
