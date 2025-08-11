/*
UESB - Universidade Estadual do Sudoeste da Bahia
Discente: Joao Elias Ferraz Santana
Disciplina: Introdução a Algoritmos e Programacao

Questao 04
Crie tres variaveis inteiras a, b e c, atribua valores a elas e crie um programa
que imprima o resultado (1 para verdadeiro, 0 para falso) de cada uma das
expressões abaixo:

(a > b) && (a == c)

(a <= b) || (b == c)

!(a == c)

(1 && (a + c >= b))

(0 || (b - a < c))
*/

#include <stdio.h>

int main()
{
    int a = 69, b = 24, c = 6712;
    
    printf("Valores das variaveis:\n");
    printf("a = %d  b = %d  c = %d\n", a, b, c);
    printf("\nResuldados de expressoes booleanas com as variaveis:\n");
    printf("(a > b) && (a == c) -> %d\n", (a > b) && (a == c));
    printf("(a <= b) || (b == c) -> %d\n", (a <= b) || (b == c));
    printf("!(a == c) -> %d\n", !(a == c));
    printf("(1 && (a + c >= b)) -> %d\n", (1 && (a + c >= b)));
    printf("(0 || (b - a < c)) -> %d\n", (0 || (b - a < c)));
    printf("Legenda: 1 = Verdadeiro; 0 = Falso\n\n");
    
    printf("Fim do programa! Aperte <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
