#include <stdio.h>

int main() {
    int matriz[2][3] = {
        {1, 2, 3},      // 1° linha da matriz
        {4, 5, 6}      // 2° linha da matriz
    };

    printf("Elemento da sefunda linha e terceira coluna: %d.\n", matriz[1][2]);
}