// 8. Escreva um algoritmo para ler o raio de um círculo, calcular e escrever a
// sua área.

#include <stdio.h>

int main()
{
    double raio, PI, circulo;
    printf("Informe o valor de Raio: \n");
    scanf("%lf", &raio);

    PI = 3.14159;
    circulo = PI * (raio * raio);
    printf("A area do circulo e: %.3lf\n", circulo);

    return 0;
}
