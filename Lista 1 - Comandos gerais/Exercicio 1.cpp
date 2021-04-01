#include <stdio.h>

int main() {
	double raio, area, pi = 3.14;
	printf("Escreva o raio:");
	scanf("%lf", &raio);
	area = pi * (raio * raio);
	printf ("A area do circulo: %.2lf\n", area);
}
