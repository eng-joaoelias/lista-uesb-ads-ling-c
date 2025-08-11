/*
ALUNO: Joao Elias Ferraz Santana
Disc.: Introducao a Algoritmos e Programacao

Questao 04
Faca um programa que leia um caractere do tipo char e depois o imprima entre
aspas duplas. Assim, se o caractere lido for a letra A, devera ser impresso “A”.
*/

#include <stdio.h>

int main()
{
    char caractere;
    printf("Entre com UM caractere>>");
    fflush(stdin);
    caractere = getchar();
    printf("Caractere informado>> \"%c\"\n", caractere);
    printf("Fim do programa. Pressione <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
