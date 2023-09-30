#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Digite o primeiro valor: \n");
    scanf("%i", &num1);
    printf("Digite o segundo valor: \n");
    scanf("%i", &num2);
	
	if(num1 > num2){
		printf("O maior valor e: %i", num1);
	}else if(num1 < num2){
		printf("O maior valor e: %i", num2);
	}else{
		printf("Os numeros sao iguais.");
	}
	
    return 0;
}
