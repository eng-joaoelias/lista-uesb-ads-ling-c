/*
ALUNO: Joao Elias Ferraz Santana
Disc.: Introducao a Algoritmos e Programacao

Questao 02
Escreva um programa que calcule a área e a circunferência de um círculo. Utilize
a diretiva de pré-processamento #define para definir o valor de PI. O programa
deve solicitar o raio do círculo ao usuário, calcular a área(pi*raio*raio) e a
circuferência(2*pi*raio), então exibir os resultados com duas casas decimais.
*/

#include <stdio.h>
#define PI 3.141592653

int main()
{
    float raio;
    printf("Informe o valor do raio>>");
    scanf("%f", &raio);
    float area = PI*raio*raio;
    float comprimento = 2*PI*raio;
    printf("Comprimento da circunferencia>> %.2f u.c.\n", comprimento);
    printf("Area da circunferencia>> %.2f u.a.\n", area);
    printf("Fim do programa. Pressione <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
