#include <stdio.h>

int main() {

    int Array[8] = {32, 27, 64, 18, 95, 14, 90, 70};
    int i;

    printf("Indice\tvalor");
    printf("-----------\t---------");

    for(i = 0; i < 8; i++)  printf("%d \t  %d\n", i, Array[1]);

    return 0; 
}