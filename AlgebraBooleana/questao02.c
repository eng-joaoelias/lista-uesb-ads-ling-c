/*
UESB - Universidade Estadual do Sudoeste da Bahia
Discente: Joao Elias Ferraz Santana
Disciplina: Introducao a Algoritmos e Programacao

Questao 02
Seu programa sera um mentiroso. Você deve fazer uma pergunta booleana e o usuario
entrara com a resposta booleana (0 ou 1). Por exemplo, "voce gosta de chocolate?"
o usuario digitaria 1 (sim). Entao, seu programa deve imprimir a resposta contraria
ao que foi respondido. Por exemplo, "o usuario respondeu que:" 0 (nao). Se a
pessoa tivesse digitado 0 o seu programa responderia ao contrario 1.
*/

#include <stdio.h>

int main()
{
    
    int opcaoPessoal;
    
    printf("Você gosta de usar o sist. operacional Windows?\n");
    printf("1 - Sim\n0 - Nao\n>>");
    scanf("%d", &opcaoPessoal);
    printf("O usuario respondeu: %d\n\n", !opcaoPessoal);
    
    printf("Fim do programa! Aperte <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
