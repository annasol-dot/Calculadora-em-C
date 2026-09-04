#include <stdio.h>
#include <math.h>

int main() {

    int opcao;
    double n1, n2, resultado;

    do {

        printf("           CALCULADORA EM C\n");

        printf("\nEscolha uma operacao:\n");
        printf("1  - Soma\n");
        printf("2  - Subtracao\n");
        printf("3  - Multiplicacao\n");
        printf("4  - Divisao\n");
        printf("5  - Resto da divisao\n");
        printf("6  - Potencia\n");
        printf("7  - Raiz quadrada\n");
        printf("8  - Porcentagem\n");
        printf("9  - Media de dois numeros\n");
        printf("10 - Media de tres numeros\n");
        printf("11 - Dobro\n");
        printf("12 - Triplo\n");
        printf("13 - Quadrado\n");
        printf("14 - Cubo\n");
        printf("15 - Numero positivo ou negativo\n");
        printf("16 - Maior entre dois numeros\n");
        printf("17 - Menor entre dois numeros\n");
        printf("18 - Valor absoluto\n");
        printf("19 - Seno\n");
        printf("20 - Cosseno\n");
        printf("0  - Sair\n");

        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("\nPrograma encerrado!\n");
            break;
        }

        switch (opcao) {

            case 1:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                resultado = n1 + n2;

                printf("Resultado: %.2lf\n", resultado);
                break;

            case 2:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                resultado = n1 - n2;

                printf("Resultado: %.2lf\n", resultado);
                break;

            case 3:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                resultado = n1 * n2;

                printf("Resultado: %.2lf\n", resultado);
                break;

            case 4:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                if (n2 == 0) {
                    printf("Nao e possivel dividir por zero!\n");
                } else {
                    resultado = n1 / n2;
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;

            case 5:
                printf("\nDigite o primeiro numero inteiro: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero inteiro: ");
                scanf("%lf", &n2);

                if ((int)n2 == 0) {
                    printf("Nao e possivel dividir por zero!\n");
                } else {
                    resultado = (int)n1 % (int)n2;
                    printf("Resto: %.0lf\n", resultado);
                }
                break;

            case 6:
                printf("\nDigite a base: ");
                scanf("%lf", &n1);

                printf("Digite o expoente: ");
                scanf("%lf", &n2);

                resultado = pow(n1, n2);

                printf("Resultado: %.2lf\n", resultado);
                break;

            case 7:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                if (n1 < 0) {
                    printf("Nao existe raiz quadrada real de numero negativo.\n");
                } else {
                    resultado = sqrt(n1);
                    printf("Resultado: %.2lf\n", resultado);
                }
                break;

            case 8:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                printf("Digite a porcentagem: ");
                scanf("%lf", &n2);

                resultado = (n1 * n2) / 100;

                printf("%.2lf%% de %.2lf = %.2lf\n",
                       n2, n1, resultado);
                break;

            case 9:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                resultado = (n1 + n2) / 2;

                printf("Media: %.2lf\n", resultado);
                break;

            case 10: {
                double n3;

                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                printf("Digite o terceiro numero: ");
                scanf("%lf", &n3);

                resultado = (n1 + n2 + n3) / 3;

                printf("Media: %.2lf\n", resultado);
                break;
            }

            case 11:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                resultado = n1 * 2;

                printf("Dobro: %.2lf\n", resultado);
                break;

            case 12:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                resultado = n1 * 3;

                printf("Triplo: %.2lf\n", resultado);
                break;

            case 13:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                resultado = n1 * n1;

                printf("Quadrado: %.2lf\n", resultado);
                break;

            case 14:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                resultado = n1 * n1 * n1;

                printf("Cubo: %.2lf\n", resultado);
                break;

            case 15:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                if (n1 > 0) {
                    printf("O numero e positivo.\n");
                } else if (n1 < 0) {
                    printf("O numero e negativo.\n");
                } else {
                    printf("O numero e zero.\n");
                }
                break;

            case 16:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                if (n1 > n2) {
                    printf("O maior numero e: %.2lf\n", n1);
                } else if (n2 > n1) {
                    printf("O maior numero e: %.2lf\n", n2);
                } else {
                    printf("Os dois numeros sao iguais.\n");
                }
                break;

            case 17:
                printf("\nDigite o primeiro numero: ");
                scanf("%lf", &n1);

                printf("Digite o segundo numero: ");
                scanf("%lf", &n2);

                if (n1 < n2) {
                    printf("O menor numero e: %.2lf\n", n1);
                } else if (n2 < n1) {
                    printf("O menor numero e: %.2lf\n", n2);
                } else {
                    printf("Os dois numeros sao iguais.\n");
                }
                break;

            case 18:
                printf("\nDigite um numero: ");
                scanf("%lf", &n1);

                resultado = fabs(n1);

                printf("Valor absoluto: %.2lf\n", resultado);
                break;

            case 19:
                printf("\nDigite um angulo em graus: ");
                scanf("%lf", &n1);

                resultado = sin(n1 * M_PI / 180);

                printf("Seno: %.2lf\n", resultado);
                break;

            case 20:
                printf("\nDigite um angulo em graus: ");
                scanf("%lf", &n1);

                resultado = cos(n1 * M_PI / 180);

                printf("Cosseno: %.2lf\n", resultado);
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}