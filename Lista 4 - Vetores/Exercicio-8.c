#include <stdio.h>

int main(){
	
	int C, L, i = 0, j = 0;
	
	printf("Qual sera o numero de linhas e colunas das matrizes? Escreva nessa ordem \n");
	scanf("%d%d", &L, &C);
	
	float M[L][C];
	
	printf("Digite os valores da matriz: \n");
	for( i = 0;i < L;i = i +1){
		for(j = 0;j < C;j = j + 1){
			printf("Valor correspondente ao indice[%i][%i]: ", i, j);
			scanf("%f", &M[i][j]);
		}
	}
	
	float M2[L][C];
	
	printf("Digite os valores da matriz: \n");
	for( i = 0;i < L ; i = i + 1){
		for(j = 0;j < C ; j = j + 1){
			printf("Valor correspondente ao indice[%i][%i]: ", i, j);
			scanf("%f", &M2[i][j]);
		}
	}
	
	
	float M3[L][C];
	
	for( i = 0;i < L;i = i +1){
		for(j = 0;j < C;j = j + 1){
			M3[i][j] = M[i][j] + M2[i][j];
			printf("%.2f ",M3[i][j]);
		}
		printf("\n");
	}
	
}
