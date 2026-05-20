#include <stdio.h>

int main() {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Dia util.\n");
            break;

        case 6:
        case 7:
            printf("Final de semana.\n");
            break;

        default:
            printf("Numero invalido.\n");
    }

    return 0;
}