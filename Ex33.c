#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include <string.h>

// struct Musica

struct Musica {
    char Titulo[50];
    char Autor[100];
    int Ano;
    
};



int main() {

    struct Musica PlayList[5];

    struct Musica A = {"Velha infancia", "Nando Reis", 2002};
    struct Musica B = {"Aquarela", "Toquinho", 1983};
    struct Musica C = {"Eu nasci a 10 mil anos atrás", "Raul Seixas", 1978};
    struct Musica D = {"Tempo perdido", "Renato Russo", 1986};
    struct Musica E = {"É", "Gonzaguinha", 1986};

    PlayList[0] = A;
    PlayList[1] = B;
    PlayList[2] = C;
    PlayList[3] = D;
    PlayList[4] = E;

    printf("%s\n", PlayList[4].Titulo);
    printf("%d\n", PlayList[2].Ano);

    for(int i = 0; i < 5; i++) printf("%s\n", PlayList[i].Autor);
    


    return 0;
}