#include <stdio.h>

int main()
{

	float n1, n2, n3, media;
	printf("Digite o valor da primeira nota: \n");
	scanf("%f", &n1);
	printf("Digite o valor da segunda nota: \n");
	scanf("%f", &n2);
	printf("Digite o valor da terceira nota: \n");
	scanf("%f", &n3);

	media = (n1 + n2 + n3) / 3;

	printf("A media das notas eh: %2.f\n", media);

	return 0;
}
