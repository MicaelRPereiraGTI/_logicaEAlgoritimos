#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){
	int n1, n2, n3, produto;
	printf("Digite os numeros: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	produto=n1*n2*n3;
	printf("\nO produto u: %d", produto);
	return 0;
}
