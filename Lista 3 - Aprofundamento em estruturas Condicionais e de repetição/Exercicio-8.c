#include <stdio.h>

int main(){
	double A,B,C;
	printf("Digite o primeiro numero:");
	scanf("%lf", &A);
	printf("Digite o segundo numero:");
	scanf("%lf", &B);
	printf("Digite o terceiro numero:");
	scanf("%lf", &C);
	
	if (A > B && A > C){
		printf("O maior e: %.2lf",A);
	}
	else if (B > A && B > C){
		printf("O maior e: %.2lf",B);
	}
	else {
		printf("O maior e: %.2lf",C);
	}

}
