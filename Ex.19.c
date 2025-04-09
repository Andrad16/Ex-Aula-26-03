#include <stdio.h>
#include <stdlib.h>

int main()  {

    system("cls");

    int n, // o número de linhas escrito pelo usuario
    int i; // para contar o númeor de linhas
    int ast; // Para reproduzir a quantidade de asteristicos
    int j;          // incompleto

    printf("Digite um númeor \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++, ast = ast + 2){
        printf("%d\t%d\n", i, ast);
    }
}