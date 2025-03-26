//  Verificar se uma pessoa tem obesidade morbida (IMC >= 40)

#include <stdio.h>

void main()  {

    float P; // Peso
    float A; // Altura
    float IMC; // índice de massa corporal

    printf("Digite peso(em kg) e altura(em m) : ");
    scanf("%df %f", &p, &h);
    IMC = P / (H * H);

    if (IMC >= 0) {

        printf("A pessoa tem obesidade morbida!\n");
    }
else{
    printf("A pessoa não tem IMC maior ou igual a 40!!!\n");
}


    return 0;
}