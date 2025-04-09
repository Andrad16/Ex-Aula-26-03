#include <stdio.h>
#include <stdlib.h>

int main()  {
    int n; // número que a pessoa digitou
    int m; // variavel para multiplicação

    system("cls");
    printf("Digite um número: \n");
    scanf("%d", &n);

    for(m = 1; m <= 10; m++) // "m" = 1, "m" pode ser menor ou igual a 10 e "m" de 1 em 1
    printf("%d x %d = %d\n", n, m, n * m); //inves de criarmos uma variavel para guardar o valor da expressão, podemos


    return 0;
}