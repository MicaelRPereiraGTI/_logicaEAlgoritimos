#include <stdio.h>

int main()
{

	float salario, vPrestacao, calc;
	printf("Diite o valor do salario: \n");
	scanf("%f", &salario);
	printf("Diite o valor da prestacao: \n");
	scanf("%f", &vPrestacao);
	
	calc = 0.20 * salario;
	if(vPrestacao > calc){
		printf("Emprestimo nao pode ser concedido!");
	}else{
		printf("Emprestimo Concedido");
	}
	
    return 0;
}
