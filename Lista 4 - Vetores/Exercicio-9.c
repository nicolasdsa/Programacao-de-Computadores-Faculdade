#include <stdio.h>

int main ()
{
	int L, C, j = 0, i = 0;
	float media = 0;
	
	printf("Qual sera o numeros de linhas e colunas da matriz? Escreva nessa ordem \n");
	scanf("%i", &L);
	scanf("%i", &C);
	
	float matriz[L][C];
	
    for(i = 0; i < L; i++){
        for(j = 0 ; j < C; j++){
        	printf("Valor correspondente ao indice[%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
            if(j == L - i - 1){
            	media = media + matriz[i][j];
			}
        }
    }
	media = media / L;
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
        	if(matriz[i][j] < media){
        		printf("i[%d][%d] abaixo da media\n", i, j);
	}
		}
    }    
}
