#include <stdio.h>

int main ()
{

	int L,i = 0, j = 0, A;
	
	printf("Escreva um numero para a colunas e linhas: \n");
	scanf("%d", &L);
	
	float M[L][L];
	
    for( i = 0; i < L; i++){
        for(j = 0 ; j < L; j++){
        	printf("Valor correspondente ao indice[%i][%i]: ", i, j);
            scanf("%f", &M[i][j]);
        }
    }

	printf("Matriz que foi digitada:\n");
	
	for(i = 0; i < L; i++){
        for(j = 0; j < L; j++){
        	printf("%.1f ", M[i][j]);
		}
    }

	for(i = 0 ; i < L ; i++){
		for(j = 0 ; j < L / 2; j++){
        	A = M[i][j];
        	M[i][j] = M[i][L / 2 + j];
        	M[i][L / 2 + j] = A;
		}
	}
	
	printf("\nMatriz embaralhada:\n");
	
	for(i = 0; i < L; i++){
        for(j = 0; j < L; j++){
        	printf("%.1f ", M[i][j]);
		}
    }
	
	return 0;
}
