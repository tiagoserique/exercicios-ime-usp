#include <stdio.h>


int contaDigitos(int numero, int digito){
    
    int qtd = 0;
    while ( numero != 0 ){
        if ( numero % 10 == digito )
            qtd++;
        numero /= 10;
    }

    return qtd;
}


int main(){

    long int num1, num2;
    int ehPermutacao = 1, cont;

    printf("Digite os numeros: \n");
    scanf(" %ld %ld", &num1, &num2);


    for (cont = 1 ; cont <= 9 ; cont++){
        if ( contaDigitos(num1, cont) != contaDigitos(num2, cont) ){
            ehPermutacao = 0;
            break;
        }
    }

    if ( ehPermutacao )
        printf("\nEh permutacao\n");
    else
        printf("\nNao eh permutacao\n");

    return 0;
}
