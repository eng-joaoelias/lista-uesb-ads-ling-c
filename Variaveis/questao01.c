/*
ALUNO: Joao Elias Ferraz Santana
Disc.: Introducao a Algoritmos e Programacao

Questao 01
Elabore um programa que solicite do usuario dois inteiros a e b. Entao imprima
o resultado das quatro operacoes (soma, subtracao, multiplicacao e divisao).
O resultado deve ser impresso em tela em linhas distintas.
*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Abaixo, entre com dois valores inteiros\nEntre com o primeiro, aperte <enter>, digite o segundo e aperte <enter> novamente\n");
    scanf("%d%d", &a, &b);
    int soma = a + b;
    int subtracao = a - b;
    int multiplicacao = a * b;
    printf("Soma de %d com %d: %d\n", a, b, soma);
    printf("Diferenca entre %d e %d: %d\n", a, b, subtracao);
    printf("Produto de %d com %d: %d\n", a, b, multiplicacao);
    if(a == 0 && b == 0){
        printf("Os dois valores sao nulos. Impossivel dividir\n");
    } else if(b == 0){
        printf("Impossivel dividir por zero!\n");
    } else {
        float divisao = (float)a / (float)b;
        printf("Quociente de %d com %d: %.2f\n", a, b, divisao);
    }
    
    printf("Fim do programa. Pressione <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
