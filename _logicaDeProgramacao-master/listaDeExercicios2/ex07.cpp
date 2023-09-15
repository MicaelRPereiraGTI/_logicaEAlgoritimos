// 7. Ler um valor inteiro e escrever seu antecessor e seu sucessor.

#include <stdio.h>

int main()
{
    int valor, ant, suc;
    printf("Digite um numero inteiro: \n");
    scanf("%i", &valor);
    ant = valor - 1;
    suc = valor + 1;

    printf("O antecessor e: %i e o sucessor e: %i\n", ant, suc);

    return 0;
}
