#include <stdio.h>
 
int main() {
	double salario, percentual, novosalario;
	printf("Escreva o salario atual:");
	scanf("%lf",&salario);
	printf("Escreva o valor do reajuste em decimal utilizando ponto:");
	scanf("%lf", &percentual);
	novosalario = salario + (salario * percentual);
	printf("O novo valor do salario: %.2lf\n", novosalario);
}
