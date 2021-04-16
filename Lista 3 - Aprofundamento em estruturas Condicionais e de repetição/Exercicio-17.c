#include <stdio.h>

int main(){
	int A, B,divisao;
	printf("Digite o dividendo:");
	scanf("%i", &A);
	
	do{
		printf("Digite o divisor:");
		scanf("%i", &B);
	}while(B == 0);
	
	divisao = A / B;
	printf("Resultado: %i", divisao);
}
