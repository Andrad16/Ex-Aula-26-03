#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 10
#define FRASE "Hoje é sexta-feira!"
#define DECIMAL 10.0

int main()  {

    int n = 10;
    float temp[n];        // Determinar o tamanho do vetor : NÃO USE VETOR!
    float vetor[TAMANHO]; // Vetor com tamanho definifo via #define

    printf("%d\n", TAMANHO);    // Mostra: 10
    printf("%s\n", FRASE);      // Moatra: hoje é Sexta=Feira
    printf("%.2f\n", DECIMAL); // Mostra: 10.00 (com 2 casas decimais)

    return 0;
}