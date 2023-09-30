#include <stdio.h>

int main()
{
    
	int num;
	printf("Digite um numero: ");
	scanf("%i", &num);
	
	if(num > 20){
		printf("O numero digitado e maior que 20!");
	}else if(num < 20){
		printf("O numero digitado e menor que 20!");
	}else{
		printf("O numero digitado e igual 20!");
	};
	
	
    return 0;
}
