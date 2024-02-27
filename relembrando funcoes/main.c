#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    printf("Ola, qual seu nome?");
    scanf("%s", nome);
    diga_boanoite(nome);
    return 0;
}

void diga_boanoite(char nome[]){
    printf(" Boa noite %s!", nome);
}
