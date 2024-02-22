#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome1;
    printf("Ola, qual seu nome?");
    scanf("%c", nome1);
    printf( nome1);
    diga_boanoite();
    return 0;
}

void diga_boanoite(){
    printf("Boa noite!");
}
