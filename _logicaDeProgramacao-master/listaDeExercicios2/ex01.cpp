// 1. Escreva um algoritmo que tenha como entrada o número de horas que um
// funcionário trabalhou e o valor da hora trabalhada. O algoritmo deverá
// calcular e escrever o salário que este funcionário irá receber.

#include <stdio.h>

int main()
{
    float numHoras, vHora, salario;
    printf("Digite o numero de horas trabalhada: \n");
    scanf("%f", &numHoras);
    printf("Digite o valor da hora trabalhada: \n");
    scanf("%f", &vHora);
    salario = numHoras * vHora;

    printf("O salario e: %.2f\n", salario);

    return 0;
}
