#include <stdio.h>

int main() {
    int numero, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {

        for (i = 1; i <= numero; i++) {
            fatorial *= i;
        }

        printf("Fatorial de %d = %llu\n", numero, fatorial);
    }

    return 0;
}