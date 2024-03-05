#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[10];
    int idade;
    printf("Ola, qual seu nome?\n");
    scanf("%s", nome);
    printf("E qual e a sua idade?\n");
    scanf("%d", &idade);
    diga_boanoite(nome , idade);

    return 0;
}

void diga_boanoite(char nome[], int idade){
    printf(" Boa noite %s!, sua idade e %d? ", nome ,idade);
    if (idade <= 18){
        printf("\nVoce esta na flor da idade.");
    }
    else if (idade >=19 && idade <=29){
        printf("\nAmigo,se prepara,pra fazer 35 agora e so um pulo");
        }
    else if (idade >=30 && idade <=49){
        printf("\nBeleza tiozao?");
            }
    else if (idade >=50){
        printf("\nO que e que ha, velhinho?");
                }
}
