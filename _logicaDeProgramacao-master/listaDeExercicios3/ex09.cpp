#include <stdio.h>

int main()
{

	int num1, num2, num3, maior;
	printf("Digite o numero 1: \n");
	scanf("%i", &num1);
	printf("Digite o numero 1: \n");
	scanf("%i", &num2);
	printf("Digite o numero 1: \n");
	scanf("%i", &num3);

	if (num1 > num2 && num1 > num3)
	{
		maior = num1;
	}
	else if (num2 > num1 && num2 > num3)
	{
		maior = num2;
	}
	else
	{
		maior = num3;
	}

	printf("O maior numero eh: %i\n", maior);

	return 0;
}
