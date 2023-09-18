// 10. Escreva um algoritmo que leia a distância percorrida por um automóvel
// (em km) e o intervalo de tempo utilizado para percorrer essa distância (em
// horas). Calcule e escreva a velocidade média no percurso em km/h.

#include <stdio.h>

int main()
{

    float dPercorrida, tempoPercorrido, vMedia;
    printf("Digite a distancia percorrida em KM: \n");
    scanf("%f", &dPercorrida);
    printf("Digite o intervalo de tempo gasto em Horas: \n");
    scanf("%f", &tempoPercorrido);

    vMedia = dPercorrida / tempoPercorrido;
    printf("A velocidade media foi: %.fkm\n", vMedia);

    return 0;
}
