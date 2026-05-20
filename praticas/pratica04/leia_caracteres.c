#include <stdio.h>

int main () {
    
    char caractere;

    printf ("Digite um caractere: ");
    scanf (" %c", &caractere);

    printf ("O caractere digitado foi '%c' e o codigo ASCII desse caracter eh '%d' \n", caractere, caractere);

    return 0;          
}