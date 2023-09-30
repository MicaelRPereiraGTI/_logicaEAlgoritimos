#include <stdio.h>

int main()
{
    int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if(num > 0){
		printf("O numero digitado e POSITIVO");
	}else{
		printf("O numero digitado e NEGATIVO");
	};
	
    return 0;
}
