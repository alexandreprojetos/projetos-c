#include <stdio.h>

int main() {
    int op;
    float num1, num2, resultado;

    do {
        printf("\n\t===== CALCULADORA =====\n");
        printf("\t1 - Soma\n");
        printf("\t2 - Subtrair\n");
        printf("\t3 - Multiplicar\n");
        printf("\t4 - Dividir\n");
        printf("\t5 - Sair\n");
        printf("\tEscolha uma opcao: ");
        scanf("%d", &op);

        if (op >= 1 && op <= 4) {
            printf("\n\tDigite o primeiro valor: ");
            scanf("%f", &num1);

            printf("\tDigite o segundo valor: ");
            scanf("%f", &num2);
        }

        switch (op) {
            case 1:
                resultado = num1 + num2;
                printf("\tResultado: %.2f\n", resultado);
                break;

            case 2:
                resultado = num1 - num2;
                printf("\tResultado: %.2f\n", resultado);
                break;

            case 3:
                resultado = num1 * num2;
                printf("\tResultado: %.2f\n", resultado);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\tErro: divisao por zero!\n");
                } else {
                    resultado = num1 / num2;
                    printf("\tResultado: %.2f\n", resultado);
                }
                break;

            case 5:
                printf("\n\tSaindo...\n");
                break;

            default:
                printf("\n\tOpcao invalida!\n");
        }

    } while (op != 5);

    printf("\n\tPrograma finalizado.\n");
    return 0;
}
