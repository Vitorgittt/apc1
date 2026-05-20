#include <stdio.h>

int main() {
    do{
    
        printf("MENU PRiNCIPAL\n");
        printf("1 - Consultar saldo\n");
        printf("2 - recarregar\n");
        printf("3 - Ver mnsagens\n");
        printf("4 - Ver ligacoes\n");
        printf("5 - Sair\n");
        printf("Ecolha uma opcao > ");
        
        int opcao = 0;
        scanf("%i", &opcao);
        while(getchar() !='\n');

        switch (opcao)
        {
        case 1:printf("Seu saldo eh R$10,00\n"); break;
        case 2:printf("Escolha entre 10, 20 e 50\n"); break;
        case 3:printf("Voce nao tm mensagns\n"); break;
        case 4:printf("Ultimas ligacos: 9999-9999\n"); break;
        case 5:printf("printf contato! Ate logo\n"); break;
        default: printf("Opcao invalida! Tente de novo!");
        }

    } while (opcao != 5);
    return 0;
}