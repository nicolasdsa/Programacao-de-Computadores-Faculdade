#include <stdio.h>
int main(){
	double inicio, final, gasto, ganho,media, lucro, preco = 5.99;
	printf("Marcacao do odometro no inicio do dia:");
	scanf("%lf",&inicio );
	printf("Marcacao do odometro no final do dia:");
	scanf("%lf",&final );
	printf("Combustivel gasto:");
	scanf("%lf",&gasto );
	printf("Valor total recebido:");
	scanf("%lf",&ganho );
	media = (final - inicio) / gasto;
	lucro = ganho - (gasto * preco);
	printf("A media do consumo foi: %.2lf Km/L e o lucro do dia foi: %.2lf reais ", media, lucro);
	
}
