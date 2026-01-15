#include <stdio.h>

int main()  {
    int cod_aluno, num_notas, aprovados, reprovados, i;
    float soma, nota, media;

    aprovados = 0;
    reprovados = 0;


        printf("\n\tDigite o codigo do aluno (0 para sair): ");
        scanf("%d", &cod_aluno);

        while(cod_aluno != 0){

                printf("\n\tNumero de notas: ");
                scanf("%d", &num_notas);

                soma = 0;

                for(i = 1; i <=num_notas; ++i){
                    printf("\n\tValor da nota: ");
                    scanf("%f", &nota);
                    soma += nota;
                }

                media = soma / num_notas;

                if(media >= 6){
                    printf("\n\tAprovado.\n");
                    ++aprovados;
                }
                else{
                    printf("\n\tReprovado\n");
                    ++reprovados;
                }
                printf("\n\tDigite o codigo do aluno (0 para sair): ");
                scanf("%d", &cod_aluno);

        } //fim while

                printf("\n\tQuantidade de aprovados: %d", aprovados);
                printf("\n\tQuantidade de reprovados: %d\n", reprovados);

                return 0;
} //fim main
