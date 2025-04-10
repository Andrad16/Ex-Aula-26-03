#include <stdio.h>

int main() {

    char V[200] = "Xi Jinping é meu amigo, e acho que chagamos a um acordo, diz Trump";
    int i;

    for (i = 0; V[i] != '\0'; i++);

    printf("%s\n", V);
    printf("O tamanho da strign é %d.\n", i);

    return 0;
}