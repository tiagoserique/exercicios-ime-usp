#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* parece errado */

double fatorial(double val){

    if ( val == 1 )
        return 1;

    return val * fatorial(val - 1);
}


int main(){

    double k = 0, x = 0, e = 0, seno = 0;

    printf("seno de x\n");
    scanf(" %lf", &x);

    while ( e <= 0 ){
        printf("valor de E\n");
        scanf(" %lf", &e);
    }

    do {

        seno += pow(-1, k) * pow(x, 2 * k + 1) / fatorial(2 * k + 1);
        k++;
    } while ( abs(seno) < e );

    printf("seno de x: %lf\n", seno);

    return 0;
}
