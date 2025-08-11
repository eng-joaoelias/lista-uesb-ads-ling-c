/*
Aluno: Joao Elias Ferraz Santana
Curso: Analise e Desenvolvimento de Sistemas
Universidade Estadual do Sudoeste da Bahia

3 - Conversão de temperatura:

*Declare uma variavel celsius do tipo float e atribua um valor de temperatura
em graus Celsius.
*Declare uma nova variavel chamda mais_quente que recebe a temperatura anterior
e adiciona 10 graus.
*Use printf para mostrar ambas as temperaturas.

*/

#include <stdio.h>

int main(){
    
    float celcius = 29;
    float mais_quente = celcius + 10;
    
    printf("Temperatura 'normal'>>%.1f°C\n", celcius);
    printf("A temperatura 10 graus celcius mais quente>> %.1f°C\n", mais_quente);
    printf("Pressione <enter> para sair...");
    getchar();

    return 0;
}
