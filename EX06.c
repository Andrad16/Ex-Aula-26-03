#include <stdio.h>
#include <stdlib.h>

int main() {
    char Letra;
    sccanf("%c", &Letra);

    switch (Letra) {
        case 'A':
              printf("Foi digitada a primeira letra da palavra ARANHA");
        break;

        case 'B':
              printf("Foi digitada a primeira letra da palavra BANCO");
        break;
        case 'c':
              printf("Foi digitada a primeira letra da palavra CACHORRO");
        break; 
        default:
              printf("Não foi digitado nenhuma das letras A, B e C");

    }

    return 0;
}