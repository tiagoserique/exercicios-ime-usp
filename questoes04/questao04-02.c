#include <stdio.h>


int encaixa(long int maior, long int menor){

    while ( menor != 0 ){
        if ( (maior % 10) != (menor % 10) ){
            return 0;
        }
        maior /= 10;
        menor /= 10;
    }

    return 1;
}

int main(){
    
    long int num1, num2, menor, maior, auxMaior;
    int encaixou;

    printf("Digite os dois numeros\n");
    scanf(" %ld %ld", &num1, &num2);


    if ( num1 > num2 ){
        menor = num2;
        auxMaior = maior = num1;
    }
    else {
        menor = num1;
        auxMaior = maior = num2;    
    }

    while ( auxMaior >= menor ){
        encaixou = encaixa(auxMaior, menor);
        if ( !encaixou )
           auxMaior /= 10;
        else
           break; 
    }

    if ( encaixou )
        printf("%ld eh segmento de %ld\n", menor, maior);
    else
        printf("um nao eh segmento do outro\n");
        

    return 0;
}
