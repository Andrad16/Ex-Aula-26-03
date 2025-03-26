#include <stdio.h>

int main()  {

    float A, B; // Limites de intervalo
    float x; // Número a ser verificado
    printf("Digite o limite dos intervalos: ");
    scanf("%f %f", &A, &B);

    printf("DIgite o valor de X: ");
    scanf("%f", &x);

    if( X >= A && X <= B) {
        printf("%f [%f, %f].\n", X, A, B);
    }
else {
    printf("!%f [%f, %f].\n", X, A, B);
}


    return 0;

}