#include <stdio.h>

int main(){

	float quad, div, num1, num2;
	printf("Digite o valor N1: \n");
	scanf("%f", &num1);
	printf("Digite o valor N1: \n");
	scanf("%f", &num2);
	quad = (num1 *num1) + (num2 * num2);
	div = num1 / num2;
	printf("\n Valor dos quadrados: %.2f", quad);
	printf("\n Valor da divisao: %.2f", div);
	return 0;
	
}
