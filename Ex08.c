 #include <stdio.h>

 int main() {

    int termo = 3;
    int soma = 0;

while(termo <= 81) {
     soma = soma + termo;
     termo = termo + 2;
}

printf("%d ", soma);

 return 0;
 }