#include <stdio.h>
#include <stdlib.h>

int main() {

    system("cls");

    float soma = 0.0;
    float den;

    for (den = 2.0; den <= 2048; den = den * 2) 
        soma = soma + 1.0 / den;
     
     printf("soma: %.6f \n", soma);

      return 0;

}