#include <stdio.h>

int main(){
	int pontos, i ;
	printf("Escreva quantos pontos no plano cartesiano, voce quer?");
	scanf("%i", &pontos);
	
	struct cartesiano{
		float x[pontos];
		float y[pontos];
	};
	
	struct cartesiano plano;
	for(i = 0; i < pontos; i++){
		printf("Ponto %i:\n", i);
		printf("Ponto x:");
		scanf("%f", &plano.x[i]);
		printf("Ponto y:");
		scanf("%f", &plano.y[i]);
	}
	
	for(i = 0; i < pontos; i++){
		printf("Ponto %i:\n", i);
		printf("X:%.2f\n",plano.x[i]);
		printf("Y:%.2f\n",plano.y[i]);
	}
	return 0;
}
