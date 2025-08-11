/*
Aluno: Joao Elias Ferraz Santana
Curso: Analise e Desenvolvimento de Sistemas
Universidade Estadual do Sudoeste da Bahia

4 - Cálculo da área e perímetro de um retângulo:

*Declare variaveis base e altura do tipo float e atribua valores para a base e
a altura de um retangulo.
*Calcule a área (area = base * altura) do retangulo.
*Use printf para exibir a area.
*/

#include <stdio.h>

int main(){
    
    float base = 56.47, altura = 19.73;
    float area = base * altura;
    printf("Area do retangulo de lados %.2f e %.2f: %.2f\n", base, altura, area);
    printf("Pressione <enter> para sair...");
    getchar();

    return 0;
}
