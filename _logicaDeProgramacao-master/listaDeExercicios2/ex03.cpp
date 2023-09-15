// 3. Escreva um algoritmo para calcular e informar o valor de conversão para
// graus centígrados de uma temperatura em graus Fahrenheit, sabendo que
// C=(5*(F-32))/9.

#include <stdio.h>

int main()
{

    float c, f;
    printf("Informe a temperatura em Fahrenheit: \n");
    scanf("%f", &f);
    c = (5 * (f - 32)) / 9;
    printf("Temperatura em Graus Centigrados: %.2f\n", c);

    return 0;
}
