/*
Aluno: Joao Elias Ferraz Santana
Curso: Analise e Desenvolvimento de Sistemas
Universidade Estadual do Sudoeste da Bahia

2 - Calculadora simples:

*Crie um programa que declare duas variaveis inteiras, num1 e num2, e atribua
valores a elas.
*Use printf para exibir os resultados na tela.

*/

#include <stdio.h>

int main(){
    int num1;
    int num2;
    
    num1 = 24;
    num2 = 69;
    
    int soma = num1 + num2;
    int diferenca = num1 - num2;
    int produto = num1 * num2;
    float quociente = (float)num1 / (float)num2;
    
    printf("###############   RESULTADOS   ###############\n");
    printf("\n>>>Soma: %d\n", soma);
    printf("\n>>>Doferenca: %d\n", diferenca);
    printf("\n>>>Produto: %d\n", produto);
    printf("\n>>>Quociente: %.4f\n", quociente);
    printf("Pressione <enter> para sair...");
    getchar();
    return 0;
}
