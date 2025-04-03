#include <stdio.h>
#include <stdlib.h>

int main() {
    system ("cls");

    float soma =  0.0;
    float denominador = 1.0;
    float sinal = 1.0;

    int N = 1; // Para contar a quntidade de termos

    do {
        soma = soma + sinal * 1.0 / denominador;
        denominador = denominador + 2.0;
        sinal = -1.0 * sinal;
        N++;
    } while ( N <= 200);

    float PI = 4.0 * soma;
    printf("O valor de PI é %f.\n", PI);

return 0;

}