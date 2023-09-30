#include <stdio.h>

int main()
{
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if(num > 0){
		printf("O numero e POSITIVO");
	}else if(num < 0){
		printf("O numero e NEGATIVO");
	}else{
		printf("O numero e ZERO");
	};
	
    return 0;
}
