#include <stdio.h>

int main(){

	int a, b, c;
	printf("Digite o valor de A: \n");
	scanf("%i", &a);
	printf("Digite o valor de B: \n");
	scanf("%i", &b);
	c = a;
	a = b;
	b = c;
	printf("Valor de A= %i e o valor de B = %i", a, b);
	return 0;
	
}
