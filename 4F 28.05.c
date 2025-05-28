#include <stdio.h>
#include <string.h>

typedef struct {
    char Nome [60];
    char DataNacimento [20];
    char CPF [15];
    char Escolaridade [20];
    float Salario; 
} Pessoa;

int main () {

    Pessoa X;
    printf("Pessoa ocupa %d bytes!\n", sizeof(Pessoa));

    strcpy(X.Nome, "Cristiano Ronaldo dos Santos Aveio");
    strcpy(X.DataNascimento, "5 de Fevereioro de 1985");
    strcpy(X.CPF, "023.232.535-07");
    strcpy(X.Escolaridade, "Ensino Básico Completo");
    X.Salario = 1,287,832,200,00;

    descrever(X);
}

//Implementando as funções

void descrever (pessoa P){
    
Pessoa lerDados() {
    // Ordem dos dados: Nome,Data de Nascimento, Salario,Escolaridade,CPF
    // Cristiano Ronaldo dos Santos Aveio.05/02/1985,30000000000.00, Fundamental Completo, 023.232.535-07

    Pessoa P;

    scanf("%s, %s, %f, %s, %s",
        P.Nome,
        P.DataNascimento,
        &P.Salario,
        PEcolaridade,
        P.CPF
    );
}    
}