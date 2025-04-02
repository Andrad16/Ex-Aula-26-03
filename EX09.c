#include <stdio.h>

int main()  {

    int N = 8;
    int soma = 1;
    
    while(N >= 1){
        soma = soma * N;
        N--; 
    }

    printf("%d" , soma);

    return 0;
}