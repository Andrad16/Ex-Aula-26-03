#include <stdio.h>

int main()  {
    int N = 1;
    int Soma = 0;

    while(N <= 100) {
        Soma = Soma + N;
        N = N + 1;
    }

    printf("A soma é %d.", Soma);
}