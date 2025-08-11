/*
ALUNO: Joao Elias Ferraz Santana
Disc.: Introducao a Algoritmos e Programacao

Questao 03
Elabore um programa que solicite ao usuário entrar com o valor do dia, mês e ano
(inteiros). Em seguida, imprima os valores lidos separados por uma barra (\).
*/

#include <stdio.h>

int main()
{
    int dia=0, mes=0, ano=0;
    printf("Abaixo, entre com os NUMEROS correspondentes ao dia de hoje.\n");
    printf("Apos cada numero, pressione <enter> para inserir o proximo.\n");
    printf("Ex.: digitou o dia, aperta <enter> para digitar o mes.\n");
    scanf("%d%d%d", &dia, &mes, &ano);
    if(dia < 10 && mes < 10){
        printf("Data informada> 0%d\\0%d\\%d\n\n", dia, mes, ano);
    } else if (dia < 10) {
        printf("Data informada> 0%d\\%d\\%d\n\n", dia, mes, ano);
    } else if (mes < 10){
        printf("Data informada> %d\\0%d\\%d\n\n", dia, mes, ano);
    } else {
        printf("Data informada> %d\\%d\\%d\n\n", dia, mes, ano);
    }
    printf("Fim do programa. Pressione <enter> para sair...");
    fflush(stdin);
    getchar();

    return 0;
}
