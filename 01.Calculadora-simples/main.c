#include <stdio.h>

int main() {
    float num1, num2, calculo;
    int op;

    do {
        printf("\n\t**** CALCULADORA ****\n");
        printf("\n\t 1 - Soma\n");
        printf("\t 2 - Subtrair\n");
        printf("\t 3 - Multiplicar\n");
        printf("\t 4 - Dividir\n");
        printf("\t 5 - Sair\n");
        printf("\n\t Digite: ");

        if (scanf("%d", &op) != 1) {
            printf("\n\tEntrada invalida! Digite um numero.\n");
            int c;
            while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }

        if (op >= 1 && op <= 4) {
            printf("\n\tDigite o primeiro valor: ");
            scanf("%f", &num1);

            printf("\n\tDigite o segundo valor: ");
            scanf("%f", &num2);
        }

        switch (op) {
            case 1:
                calculo = num1 + num2;
                printf("\tA soma e: %.2f\n", calculo);
                break;

            case 2:
                calculo = num1 - num2;
                printf("\tA subtracao e: %.2f\n", calculo);
                break;

            case 3:
                calculo = num1 * num2;
                printf("\tA multiplicacao e: %.2f\n", calculo);
                break;

            case 4:
                if (num2 == 0) {
                    printf("\tErro: divisao por zero!\n");
                } else {
                    calculo = num1 / num2;
                    printf("\tA divisao e: %.2f\n", calculo);
                }
                break;

            case 5:
                printf("\n\tSaindo...\n");
                break;

            default:
                printf("\tOpcao invalida.\n");
                break;
        }

    } while (op != 5);

    printf("\n\tSaindo do programa.\n");
    return 0;
}
