#include <stdio.h>
#include <conio.h>

int main() {
    char primeiro[10];
    char segundo[10];
    printf("Escreva o primeiro nome: ");
    gets(primeiro);
    printf("Escreva o segundo nome: ");
    gets(segundo);
    printf("O nome e %s %s \n " , primeiro, segundo);

    return (0);
}
