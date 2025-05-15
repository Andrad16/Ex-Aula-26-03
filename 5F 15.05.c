#include <stdio.h>
#include <stdlib.h>

/*
 A = É o primeiro termo da progressão
 R = Razão (é o aumento ou diminuição de um termo para o seguinte)
 N = A quantidade de termo na progressão
 PA = Determina o termo que está na posição N
*/

PA (float A, float R, int N){ //função PA (apenas nome)
    
    float resposta = A;
    for ( int i = 2; i <= N; i++) resposta = resposta + R;
    return resposta;

}

int main (){

    float t1 = PA (2,4,5);
    printf("Teste 1: %2.f\n", t1);

    return 0;
    
}