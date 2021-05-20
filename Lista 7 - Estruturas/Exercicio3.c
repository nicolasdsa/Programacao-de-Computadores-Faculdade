#include <stdio.h>

int main(){
	int pontos, i ;
	float xmenor,xmaior, ymenor, ymaior;
	printf("Escreva quantos pontos no plano cartesiano, voce quer?");
	scanf("%i", &pontos);
	
	struct dados{
		float pontox[pontos];
		float pontoy[pontos];
		
		float centralx;
		float centraly;
		float raio;
	};
	
	struct dados total;

	
	printf("Escreva o raio do circulo:");
	scanf("%f", &total.raio);
	printf("Ponto central em relacao X:");
	scanf("%f", &total.centralx);
	printf("Ponto central em relacao Y:");
	scanf("%f", &total.centraly);	
	
	printf("Agora, escreva a coordenada dos pontos:\n");
	for(i = 0; i < pontos; i++){
		printf("Ponto %i:\n", i);
		printf("Ponto x:");
		scanf("%f", &total.pontox[i]);
		printf("Ponto y:");
		scanf("%f", &total.pontoy[i]);
	}
	
	xmaior = total.centralx + total.raio;
	xmenor = total.centralx - total.raio;
	ymaior = total.centraly + total.raio;
	ymenor = total.centraly - total.raio;
	
	for(i = 0; i < pontos; i++){
		printf("Ponto %i:\n", i);
		if(xmenor <= total.pontox[i] && xmaior >= total.pontox[i] && ymenor <= total.pontoy[i] && ymaior >= total.pontoy[i] ){
			printf("O ponto esta dentro do circulo.");
		}
		else{
			printf("O ponto esta fora do circulo.\n");
		}
	}
	return 0;
}
