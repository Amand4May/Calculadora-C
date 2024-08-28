
void soma(float x, float y);
void mult(float x, float y);
void pot(float x, float y);
void prodnot(float x, float y);
void mediaa(float x, float y);
void mediap(float x, float y);
void fat(int x);

int main() {
    float x, y;
    int n;
    int opcao = 0;

    do {
        printf("\t________________________________");
        printf("\n\t|                              |");
        printf("\n\t|       Calculadora 2.0        |");
        printf("\n\t|                              |");
        printf("\n\t| 1 - Soma                     |");
        printf("\n\t| 2 - Multiplicacao            |");
        printf("\n\t| 3 - Potencia                 |");
        printf("\n\t| 4 - Prod Notavel             |");
        printf("\n\t| 5 - Media Aritmetica         |");
        printf("\n\t| 6 - Media Ponderada          |");
        printf("\n\t| 7 - Fatorial                 |");
        printf("\n\t| 8 - Sair                     |");
        printf("\n\t|                              |\n");
        printf("\t--------------------------------\n");

        printf("\n\tDigite a opcao que deseja: ");
        scanf("%d", &opcao); 

        if (opcao >= 1 && opcao <= 6) {
            printf("\n\tDigite o primeiro numero: ");
            scanf("%f", &x);
            printf("\n\tDigite o segundo numero: ");
            scanf("%f", &y);
        } else if (opcao == 7) {
            printf("\n\tDigite um numero inteiro: ");
            scanf("%d", &n);
        }

        switch (opcao) {
            case 1:
                soma(x, y);
                break;
            case 2:
                mult(x, y);
                break;
            case 3:
                pot(x, y);
                break;
            case 4:
                prodnot(x, y);
                break;
            case 5:
                mediaa(x, y);
                break;
            case 6:
                mediap(x, y);
                break;
            case 7:
                fat(n);
                break;
            case 8:
                printf("\n\tSaindo...\n");
                break;
            default:
                printf("\n\tOpcao invalida!\n");
                break;
        }

    } while (opcao != 8);

    return 0;
}

void soma(float x, float y) {
	printf("\t_________________________________\n");
	printf("\t|                               |\n");
    printf("\t|   Resultado da soma: %.2f     | \n", x + y);
    printf("\t|                               |\n");
    printf("\t---------------------------------\n");
}

void mult(float x, float y) {
    printf("\t______________________________________\n");
	printf("\t|                                      |\n");
    printf("\t|   Resultado da multiplicacao: %.2f   |\n", x * y);
    printf("\t|                                      |\n");
    printf("\t---------------------------------------\n");
}

void pot(float x, float y) {
    printf("\n\tResultado da potencia: %.2f\n", pow(x, y));
}

void prodnot(float x, float y) {
    printf("\n\tResultado do produto notavel (x + y)²: %.2f\n", pow(x, 2) + 2 * x * y + pow(y, 2));
}

void mediaa(float x, float y) {
    printf("\n\tMedia aritmetica: %.2f\n", (x + y) / 2);
}

void mediap(float x, float y) {
    printf("\n\tMedia ponderada (pesos 3 e 2): %.2f\n", (3 * x + 2 * y) / 5);
}

void fat(int x) {
    int fatorial = 1;
    for (int i = 1; i <= x; i++) {
        fatorial *= i;
    }
    printf("\n\tFatorial de %d: %d\n", x, fatorial);
}