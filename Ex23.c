#include <stio.h>

int main() {

    int numeros[5] = {2, 3, 5, 8, 13}; // Vetor(array) de inteiros com 5 posições
    int i;

    for(i = 0; i <=4; i++) {
        printf("%d \t %d \n", numeros[i] &numeros[i]);
    }

    // Observação:
    //&numeros[i]:... endereço de memorioa da variavel numeors[i].
    //%p: mostra o resultado como hexadecimal

    return 0;

}