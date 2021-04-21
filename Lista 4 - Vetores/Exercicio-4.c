#include <stdio.h>

int main(){
	int i = 0, contador = 0;
	double A[14],B;
	
	printf("Digite o valor X a ser comparado:");
	scanf("%lf", &B);
	
	for (i; i <= 14; i++){
		printf("Escreva o indice %i:", i);
		scanf("%lf", &A[i]);
		
		if (A[i] == B){
			contador++;
		}
	}
	printf("O numero de vezes repetido: %i",contador);
	
	
		
}
