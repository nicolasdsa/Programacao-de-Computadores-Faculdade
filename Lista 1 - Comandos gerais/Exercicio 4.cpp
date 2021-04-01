#include <stdio.h>

int main() {
	double fahrenheit,celsius;
	printf("Escreva a temperatura em Celsius:");
	scanf("%lf",&celsius );
	fahrenheit = ((celsius / 5) * 9) + 32;
	printf("A temperatura em Fahrenheit: %.2lf F\n", fahrenheit);
}
