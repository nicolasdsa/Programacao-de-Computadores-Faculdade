#include <stdio.h>

int main(){
	double A,B;
	printf("Digite o primeiro numero:");
	scanf("%lf", &A);
	printf("Digite o segundo numero:");
	scanf("%lf", &B);
	
	if (A > B){
		printf("O numero maior e: %.2lf",A);
	}
	else{
		printf("O numero maior e: %.2lf",B);
	}

}
