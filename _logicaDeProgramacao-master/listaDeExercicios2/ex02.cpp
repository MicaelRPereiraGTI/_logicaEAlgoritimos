// 2. Escreva um algoritmo que leia dois valores numéricos inteiros,
// armazenando-os em duas variáveis (a e b). O algoritmo deverá trocar o valor
// das duas variáveis, de tal forma que em a fique armazenado o valor de b e
// vice-versa. Ao final, o algoritmo deverá escrever os valores de a e b.

#include <stdio.h>

int main()
{

    int a, b, c;
    printf("Digite o valor de A: \n");
    scanf("%i", &a);
    printf("Digite o valor de B: \n");
    scanf("%i", &b);
    c = a;
    a = b;
    b = c;
    printf("Valor de A = %i e o valor de B = %i", a, b);

    return 0;
}
