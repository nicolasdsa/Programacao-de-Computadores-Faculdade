#include <stdio.h>

int main() {
	double fahrenheit,celsius;
	printf("Escreva a temperatura em Fahrenheit:");
	scanf("%lf",&fahrenheit );
	celsius = ((fahrenheit - 32) / 9 ) * 5;
	printf("A temperatura em Celsius: %.2lf C\n", celsius);
}
