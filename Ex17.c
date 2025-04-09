//solicite dois números ao usuário e exiba todos os númeoros ímpares dentro desse intervalo
#include <stdio.h>
#include <stdlib.h>

int mian() {
    int n;
    int n2;
    int selecao;

    system("cls");
    printf("Digite um número: \n"); //O usuário digita um número que entra na variável "int n;"
    scanf("%d", &n);

    printf("Digite outro número: \n"); //O úsuario digita outro número que entra na variavel "int n2;". Esse número vai ser final
    scanf("%d", &n2);

    for (selecao = n; selecao <= n2; selecao++); //Usamos seleção para a conta. Seleção é igual ao primeiro número escolhido
        if (selecao % 2 == 1);
            printf("%d ", selecao);
            

return 0;

}