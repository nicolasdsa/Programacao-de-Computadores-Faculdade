#include <stdio.h>
#include <math.h>

int main(){
	int pontos, i , escola, teste = 0, identificador, valormenor,j;
		float xmenor,xmaior, ymenor, ymaior;
	printf("Escreva quantas escolas, voce quer?");
	scanf("%i", &escola);
	
	struct escolas{
		float pontox[escola];
		float pontoy[escola];
		float raio[escola];
	};
	
	struct escolas alcance;

	printf("Escreva quantos alunos, voce quer?");
	scanf("%i", &pontos);
	
	struct cartesiano{
		float x[pontos];
		float y[pontos];
	};
	
	struct cartesiano plano;
	for(i = 0; i < pontos; i++){
		printf("Aluno %i:\n", i);
		printf("Aluno em relacao x:");
		scanf("%f", &plano.x[i]);
		printf("Aluno em relacao y:");
		scanf("%f", &plano.y[i]);
	}
	
	for(i = 0; i < escola; i++){
		printf("Escola %i:\n", i);
		printf("Escola em relacao x:");
		scanf("%f", &alcance.pontox[i]);
		printf("Escola em relacao y:");
		scanf("%f", &alcance.pontoy[i]);
		printf("Raio de abrangencia:");
		scanf("%f", &alcance.raio[i]);
	}
	
		

	
for(i = 0;i < pontos;i++){
		valormenor = 999999999;
		identificador = 0;
		for(j = 0;j < escola; j++){
			if(valormenor > pow(( plano.x[i] - alcance.pontox[i]), 2) + pow((plano.y[i] - alcance.pontoy[j]), 2)){
				valormenor = pow((plano.x[i]-alcance.pontox[i]), 2) + pow((plano.y[i]-alcance.pontoy[j]), 2);
				identificador = j;
			}
		}
		printf("Aluno %d:\n Vaga na escola %d\n", i, identificador);
	}
	return 0;
}

