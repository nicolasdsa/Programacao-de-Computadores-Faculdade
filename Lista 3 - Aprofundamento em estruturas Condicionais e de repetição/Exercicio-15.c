#include <stdio.h>

int main(){
		double v1,v2, mt, mediafinal;
		int A;

	do{

	printf("Digite a nota 1:");
	scanf("%lf",&v1 );
	printf("Digite a nota 2:");
	scanf("%lf",&v2 );
	mediafinal = (v1 + v2) /2;
	printf("A media final e: %.2lf\n",mediafinal);
	
	printf("Outro aluno(1.sim 2.nao)?\n");
	scanf("%i",&A);
	
	}while(A != 2);
}
