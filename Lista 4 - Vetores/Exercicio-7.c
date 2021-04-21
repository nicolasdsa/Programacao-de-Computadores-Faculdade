#include <stdio.h>

int main(){
	int i, j;
	float M[5][5],A = 0;
	
	for(i = 0; i < 5 ; i++){
		for(j = 0; j < 5 ; j++){
			printf("Valor correspondente ao indice[%i][%i]: ", i, j);
			scanf("%f", &M[i][j]);
		}
	}
	
	printf("\n");
	
	for(i = 0;i < 5;i++){
		for(j = 0;j < 3;j = j + 2){ 
			A = M[i][j];
			M[i][j] = M[i][j+1];
			M[i][j+1] = A;
		}
	}
	
		for(i = 0; i < 5;i++){
		for(j = 0;j < 5; j++){
			printf("%.2f ", M[i][j]);
		}
		printf("\n");
	}
	
}

