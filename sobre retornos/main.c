#include <stdio.h>
#include <stdlib.h>


double cube (double num);

int main(){
    printf("resposta: %f", cube(3.0));
    printf("\nprototipagem e muito util");
    return 0 ;

}

double cube (double num) {
    double result = num * num * num;
    return result;
}
