#include <stdio.h>


int main(){

    int n, cont;
    double num1, num2;

    printf("Quantidade de repeticoes\n");
    scanf(" %d", &n);

    for (cont = 0 ; cont < n ; cont++){
    
        printf("\n1° numero: \n");
        scanf(" %lf", &num1);
        printf("\n2° numero: \n");
        scanf(" %lf", &num2);
        
        int cont2;
        for (cont2 = 0 ; cont2 < 3 ; cont2++){ 

            char simbolo;
            printf("Simbolo\n");
            scanf(" %c", &simbolo);
            switch (simbolo){

                case ('+'): 
                    printf("\n%0.2lf + %0.2lf = %0.2lf\n", num1, num2, num1 + num2);
                break;

                case ('-'):
                    printf("\n%0.2lf - %0.2lf = %0.2lf\n", num1, num2, num1 - num2);
                break;

                case ('*'):
                    printf("\n%0.2lf * %0.2lf = %0.2lf\n", num1, num2, num1 * num2);
                break;

                case ('/'):
                    printf("\n%0.2lf / %0.2lf = %0.2lf\n", num1, num2, num1 / num2);
                break;

                default:
                    printf("Nao eh um dos simbolos requeridos\n");
                    cont--;
                break;
            }
        }
    }

    return 0;
}
