#include <stdio.h>

int main(){
	double A,B;
	printf("Digite o primeiro numero:");
	scanf("%lf", &A);
	printf("Digite o segundo numero:");
	scanf("%lf", &B);
	
	if (A > B){
		printf("Ordem crescente: %.2lf, %.2lf", B,A);
	}
	else{
		printf("Ordem crescente: %.2lf, %.2lf", A,B);
	}

}
