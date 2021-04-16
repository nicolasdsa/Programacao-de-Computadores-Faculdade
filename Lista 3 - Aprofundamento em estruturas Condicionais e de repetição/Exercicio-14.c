#include <stdio.h>

int main() {
	int A;
	double fahrenheit,celsius;
		do{

	printf("Escreva a temperatura em Celsius:");
	scanf("%lf",&celsius );
	fahrenheit = ((celsius / 5) * 9) + 32;
	printf("A temperatura em Fahrenheit: %.2lf F\n", fahrenheit);
	
	printf("Nova temperatura (1.sim 2.nao)?\n");
	scanf("%i",&A);
	}while(A != 2);
}

