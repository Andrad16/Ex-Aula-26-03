#include <stdio.h>
#include <stdlib.h>

//Fazer uma função que transformará inteiros em char
char f(int x){
    char resp;
    if(x == 1) resp = ' c ';  // Casp seja 1 a respostaé c 
    else if(x == 2) resp = ' d ';  // Caso seja 2 a resposta é d 
    else if(x == 3) resp = ' b ';  // Caso seja 3 a resposta é b 
    else if(x == 4) resp = ' e ';  // Caso seja 4 a resposta é e
    else if(x == 5) resp = ' e ';  // Caso seja 5 a resposta é e
    return resp;//
}

    int main(){
        char teste = f(4);
        
    }
