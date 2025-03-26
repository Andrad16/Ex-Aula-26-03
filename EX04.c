#include <stdio.h>

int main() {
    
    float nota;
    char conceito;
     printf("Digite a nota: ");
     scanf("%f", &nota);
     if(nota >= 9) {
        conceito = 'A';
     }
     else if( nota >= 7 && nota < 9) {
        conceito = 'B';     
    }
    else if (nota >= 5 && nota < 7) {
        conceito = 'C';
    }
    else if (nota < 5 ) {
        conceito = 'D';
    }

    printf("O conceito é %c.\n", conceito);

    return 0; 
}