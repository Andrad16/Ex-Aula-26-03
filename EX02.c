// Escreva o codigo fonte em C para, a partir da idade fornecida pelo teclado, verificar se, para essa pessoa, o voto é obrigatorio

#include <stdio.h>

int main()  {

    int idade;
    printf("Digite a idade");
    scanf("%d", &idade);
    
    if(idade >= 18 && idade <=69) {
        printf("O valor é obrigatorio");
    }
    else {
        printf("O voto não é obrigatorio");
    }

    
    return 0;
}