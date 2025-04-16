#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()  {

    char minhaString[50];
    strcpy(minhaString, "Esta e uma frasede exemplo"); // COPIA em minhaString
    printf("%s\n", minhaString); 

    // SEGUNDO EXEMPLO !

    char frase[1000];

    strcpy(frase, "Hoje");
    strcpy(frase, "e sexta");
    strcpy(frase, "-feira!");
    printf("%s\n", frase); // -feira
}