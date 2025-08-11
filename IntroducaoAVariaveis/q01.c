/*
Aluno: Joao Elias Ferraz Santana
Curso: Analise e Desenvolvimento de Sistemas
Universidade Estadual do Sudoeste da Bahia
1 - Exibicao de Dados Pessoais:

*Declare variaveis para armazenar seu sexo, idade (como inteiro) e uma letra
inicial do seu nome.
*Atribua valores a essas variaveis.
*Use printf para exibir essas informações em uma frase completa, como
"Meu nome comeca com [nome], tenho [idade] anos e meu sexo começa com [sexo]".
*/

#include <stdio.h>

int main()
{
    char sexo;
    int idade;
    char letraInicial;
    
    sexo = 'M';
    idade = 25;
    letraInicial = 'J';
    
    printf("Meu nome começa com %c, tenho %d anos e meu sexo comeca com %c\n", letraInicial, idade, sexo);
    printf("Pressione <enter> para sair...");
    getchar();
    return 0;
}
