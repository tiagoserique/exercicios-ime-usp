#include <stdio.h>


int main(){

    double popCidade1, popCidade2, crescimento1, crescimento2;
    double menorPop, maiorPop;
    double taxaMenor, taxaMaior;

    int anos = 0;

    printf("Digite as duas populacoes\n");
    scanf(" %lf %lf", &popCidade1, &popCidade2);
    printf("Digite as taxas de crescimento\n");
    scanf(" %lf %lf", &crescimento1, &crescimento2);

    if ( popCidade1 > popCidade2 ){
        menorPop    = popCidade2;
        taxaMenor   = crescimento2;
        maiorPop    = popCidade1;
        taxaMaior   = crescimento1;
    }
    else if ( popCidade1 < popCidade2 ){
        menorPop    = popCidade1;
        taxaMenor   = crescimento1;
        maiorPop    = popCidade2;
        taxaMaior   = crescimento2;
    }


    while ( menorPop < maiorPop ){
        menorPop += menorPop * taxaMenor;
        maiorPop += maiorPop * taxaMaior;
        anos++;
    }

    if ( anos == 0 )
        printf("\nA cidade nao ultrapassara\n");
    else
        printf("\nDemorara %d anos para ultrapassar\n", anos);

    return 0;
}
