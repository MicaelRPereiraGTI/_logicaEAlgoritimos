// 4. Escreva um algoritmo para calcular o consumo médio de combustível de
// um automóvel em Km/l. Considere como dados de entrada: quilometragem
// inicial, quilometragem final, volume de combustível consumido.

#include <stdio.h>

int main()
{

    float qInicial, qFinal, cConsumido, qPercorrida, cMedio;
    printf("Digite a quilometragem inicial: \n");
    scanf("%f", &qInicial);
    printf("Digite a quilometragem final: \n");
    scanf("%f", &qFinal);
    printf("Digite o combustivel consumido: \n");
    scanf("%f", &cConsumido);

    qPercorrida = qFinal - qInicial;
    cMedio = qPercorrida / cConsumido;
    printf("O consumo medio e: %.2f\n", cMedio);

    return 0;
}
