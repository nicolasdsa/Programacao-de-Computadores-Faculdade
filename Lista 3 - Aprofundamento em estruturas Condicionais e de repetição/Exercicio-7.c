#include <stdio.h>

int main(){
	double A,B,resultado;
	int C;
	printf("Digite o primeiro numero:");
	scanf("%lf", &A);
	printf("Digite o segundo numero:");
	scanf("%lf", &B);
	
	printf("Digite o numero da operacao desejada:\n1)Adicao\n2)Subtracao\n3)Divisao\n4)Multiplicacao\n");
	scanf("%i", &C);
	
	switch (C){
		case 1:
			resultado = A + B;
			printf("O resultado da adicao e: %.2lf", resultado);
			break;
		case 2:
			resultado = A - B;
			printf("O resultado da subtracao e: %.2lf", resultado);
			break;
		case 3:
			resultado = A / B;
			printf("O resultado da divisao e: %.2lf", resultado);
			break;
		case 4:
			resultado = A * B;
			printf("O resultado da multiplicao e: %.2lf", resultado);
			break;
	}
}
