#include <stdio.h>

int main() {

    int N = 2;
    int C = 0;
    int T = 2;

    while(N <= 53){
        C = C + T;
        printf("%d \t %d \t %d \n", N, T, C);
        T = T + 3;
        N++;
    } 

    printf("A soma dos 53 primeiros termos da PA é %d", c);
    
    return 0;
}