#include <stdio.h>

int main () {
    
    float P1;
    float P2;

    printf ("Qual foi sua nota m P1? ");
    scanf ("%f", &P1);
    while (getchar() !='\n');

    printf ("Qual foi sua nota em P2? ");
    scanf ("%f", &P2);
    while (getchar() !='\n');
    
    printf ("Sua nota em P1 e P2 foram: \n");
    printf ("P1 = %.2f\n", P1);
    printf ("P2 = %.2f\n", P2);

    return 0;
}