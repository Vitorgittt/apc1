#include <stdio.h>

int main() {
    
    int idade;
    
    float altura;
    
    float peso;
    
    char sexo;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite seu sexo 'M' ou 'F': ");
    scanf(" %c", &sexo);

    printf("Digite seu peso (ex: 72.825): ");
    scanf("%f", &peso);

    printf("\n===== FICHA CADASTRAL =====\n");
    printf("Idade  : %d anos\n", idade);
    printf("Altura : %.2f m\n", altura);
    printf("Sexo   : %c\n", sexo);
    printf("Peso   : %.3f kg\n", peso);
    printf("===========================\n");

    return 0;
}