#include <stdio.h>


int main(){

    double n, auxN, soma;


    printf("Valor para N\n");
    scanf(" %lf", &n);

    auxN = n;
    int cont;
    for (cont = 1 ; cont <= n ; cont++){
    
        soma += cont / auxN;
        auxN -= 1;
    }

        printf("soma: %0.3lf\n", soma);

    return 0;
}
