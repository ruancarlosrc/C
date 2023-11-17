#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[10];
    printf("Digite uma string: ");
    gets(string);
    printf("\n\nVoce digitou: \n %s" , string);
    return( 0 );
}
