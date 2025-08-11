/*
UESB - Universidade Estadual do Sudoeste da Bahia
Discente: Joao Elias Ferraz Santana
Disciplina: Introdução a Algoritmos e Programacao

Questao 03
Faca um programa que verifica se um numero e par. Voce deve solicitar que o 
usuario digite um numero inteiro. Entao, utilize o operador % e calcule o resto
da divisao. Logo apos, verifique se o resultado e igual a 0. Seu programa deve
imprimir 1 (verdade) se o número for par e 0 (falso) se o número for impar.
*/

#include <stdio.h>

int main()
{
    int valDigitado;
    
    printf("Entre com um numero INTEIRO a seguir>>");
    scanf("%d", &valDigitado);
    
    int restoDivisao = valDigitado % 2;
    
    printf("O numero e par? %d\n", restoDivisao == 0);
    printf("O numero e impar? %d\n\n", restoDivisao !=0);
    
    printf("Fim do programa! Aperte <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
