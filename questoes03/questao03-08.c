#include <stdio.h>


double pegaNota(){
    
    double nota;

    scanf("%lf", &nota);
    if ( nota > 10 || nota < 0 ){
        printf("Valor de nota invalido\n");
        pegaNota();
    }

    return nota;
}

int main(){
    
    int nAlunos = 0, nAprovados = 0, nReprovados = 0;
    double mediaClasse = 0, mediaAluno = 0;

    printf("Numero de alunos\n");
    scanf(" %d", &nAlunos);

    int cont;
    for (cont = 0 ; cont < nAlunos ; cont++){
        double n1 = 0, n2 = 0, n3 = 0;

        printf("\nN1\n");
        n1 = pegaNota();

        printf("\nN2\n");
        n2 = pegaNota();
        
        printf("\nN3\n");
        n3 = pegaNota();

        mediaAluno = ( n1 + n2 + n3 ) / 3;
        printf("\nMedia do aluno: %0.3lf\n", mediaAluno);

        if ( mediaAluno >= 5.0 )
            nAprovados += 1;
        else
            nReprovados += 1;

        mediaClasse += mediaAluno;
    }

    printf("\nQtd aprovados: %d\n", nAprovados);
    printf("Qtd reprovados: %d\n", nReprovados);

    mediaClasse /= nAlunos;
    printf("Media da classe: %0.3lf\n", mediaClasse);

    return 0;
}
