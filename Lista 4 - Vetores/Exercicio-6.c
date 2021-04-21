#include <stdio.h>

int main()
{
	int C, L, i = 0, j = 0;
	
	printf("Qual sera o numeros de linhas e colunas da matriz? Escreva nessa ordem \n");
	scanf("%i", &L);
	scanf("%i", &C);
	
	float M[L][C];
	
	for( i = 0 ; i < L ; i++){
		for(j = 0 ; j < C; j++){
			printf("Valor correspondente ao indice[%i][%i]: ", i, j);
			scanf("%f", &M[i][j]);
		}
}
	
	for(i = 0; i < C ; i++){
		for(j = 0 ;j < L ; j++){
			printf("%.2f ", M[j][i]);
		}
		printf("\n");
	}
}
