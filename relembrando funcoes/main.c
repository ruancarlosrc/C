#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int idade;
    printf("Ola, qual seu nome?");
    scanf("%s", nome);
    printf("E qual e a sua idade?");
    scanf("%d", &idade);
    diga_boanoite(nome , idade);

    return 0;
}

void diga_boanoite(char nome[], int idade){
    printf(" Boa noite %s!, sua idade e %d? nossa voce esta velho!", nome ,idade);
}
