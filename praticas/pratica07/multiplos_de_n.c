#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Nao existem multiplos de 0 no intervalo.\n");
    } else {

        printf("Multiplos de %d entre 1 e 100:\n", n);

        for (i = 1; i <= 100; i++) {

            if (i % n == 0) {
                printf("%d ", i);
            }

        }

        printf("\n");
    }

    return 0;
}