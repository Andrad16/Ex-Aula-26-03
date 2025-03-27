#include <stdio.h>
#include <stdlib.h>// Biblioteca que possui geração de números
#include <time.h> // Biblioteca para manipulação de tempo

int main() {
    int magic = rand();
    srand(3);
    int UserNumber;

    printf("Tente acertar o númro aleatorio. Digite seu palpite aqui: ");
    scanf("%d",  &UserNumber);
    if(UserNumber == magic){
        printf("Voce acertou");
    }else(UserNumber < magic){
        printf("O seu número é muito pequeno");
    }else if(UserNumber > magic){
        prinf("Seu numero e muito grande")
    }
}