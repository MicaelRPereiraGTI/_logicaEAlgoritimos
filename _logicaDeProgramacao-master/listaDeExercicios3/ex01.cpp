#include <stdio.h>

int main()
{
    
    int num;
    printf("Digte um numero: \n");
    scanf("%i", &num);
    
    if(num % 2 == 0){
    	printf("O numero digitado e PAR!");
	}else{
		printf("O numero digitado e IMPAR!");
	};
	
    return 0;
}
