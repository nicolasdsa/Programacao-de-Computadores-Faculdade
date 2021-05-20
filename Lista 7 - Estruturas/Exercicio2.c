#include <stdio.h>

int main(){
	int circulos, i ;
	printf("Escreva quantos circulos, voce deseja?");
	scanf("%i", &circulos);
	
	struct dados{
		float pontox[circulos];
		float pontoy[circulos];
		float raio[circulos];
	};
	
	struct dados total;
	for(i = 0; i < circulos; i++){
		printf("Circulo %i:\n", i);
		printf("Ponto central em relacao X:");
		scanf("%f", &total.pontox[i]);
		printf("Ponto central em relacao Y:");
		scanf("%f", &total.pontoy[i]);
		printf("Raio:");
		scanf("%f", &total.raio[i]);
	}
	
	for(i = 0; i < circulos; i++){
		printf("Circulo %i:\n", i);
		printf("%.2f ponto central em relacao X\n",total.pontox[i]);
		printf("%.2f ponto central em relacao Y\n",total.pontoy[i]);
		printf("%.2f raio\n",total.raio[i]);
	}
	return 0;
}
