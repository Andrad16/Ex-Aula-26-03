#include <stdio.h>
#include <stdlib.h>

int main()  {
    int N;
    int Soma;
    int i;

    printf("Digite um número positivo: \n");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) Soma = Soma + i;
    printf("Soma de todos os números de 1 a %d: %d.\n", N, Soma);

    return 0;
    
}