/*
UESB - Universidade Estadual do Sudoeste da Bahia
Discente: Joao Elias Ferraz Santana
Disciplina: Introdução a Algoritmos e Programacao

Questao 01
Escreva um programa em C que defina os estados de dois interruptores usando
lógica booleana. Você solicitará que o usuário digite dois valores booleanos
(0 ou 1), então atribua a duas variáveis (lampada1 e lampada2), onde 1 significa
ligada e 0 desligada; Você utilizará os operadores lógicos "E" e "OU" para
responder às seguintes perguntas: "Todas as lâmpadas estão ligadas?", "Há alguma
lâmpada ligada?". Seu programa deve imprimir as perguntas e as respostas booleanas.
*/

#include <stdio.h>

int main()
{
    
    int lampada1, lampada2;
    
    printf("Digite dois valores booleanos abaixo.");
    printf("\nEsses valores representam os estados de ligado ou desligado de duas lampadas");
    printf("\nInstrucoes: apos digitar o primeiro, aperte <enter> e digite o segundo\n");
    scanf("%d%d", &lampada1, &lampada2);
    printf("\nTodas as lâmpadas estão ligadas? %d\n", lampada1 && lampada2);
    printf("Há alguma lâmpada ligada? %d\n\n", lampada1 || lampada2);
    printf("Fim do programa! Aperte <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
