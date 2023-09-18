// 9. Escreva um algoritmo para ler as dimensões de uma cozinha retangular
// (comprimento, largura e altura). Calcular e escrever a quantidade de caixas
// de azulejos para se colocar em todas as suas paredes (considere que não será
// descontada a área ocupada por portas e janelas). Cada caixa de azulejos possui
// 1,5 m2.

#include <stdio.h>

int main()
{

    float c, l, a, aParede, qCaixas;
    printf("Digite o Comprimento: ");
    scanf("%f", &c);
    printf("Digite a Largura: ");
    scanf("%f", &l);
    printf("Digite a Altura: ");
    scanf("%f", &a);

    aParede = 2 * a * (c + l);
    qCaixas = aParede / 1.5;
    printf("A quantidade de caixas e: %.3f", qCaixas);

    return 0;
}
