#include <stdio.h>

int main ()
{

	int L, C, i = 0, j = 0;
	
	printf("Qual sera o numeros de linhas e colunas da matriz? Escreva nessa ordem \n");
	scanf("%i", &L);
	scanf("%i", &C);
	
	float matriz[L][C];
	float media[L];
	
	for(i = 0 ; i < L ; i++){
		media[i] = 0;
	}
	
    for(i = 0 ; i < L ; i++){
        for( j = 0; j < C ; j++){
        	printf("Valor correspondente ao indice[%i][%i]: ", i, j);
            scanf("%f", &matriz[i][j]);
            media[i]= media[i] + matriz[i][j];
        }
    }


	for(i = 0 ; i < L ; i++){
		media[i] = media[i] / C;
	}
	
	
    for(i = 0; i < L; i++){
        for(j = 0; j < C; j++){
        	printf("Media da linha: %.2f\n", media[i]);
        	if(matriz[i][j] < media[i]){
        		printf("o indice em questao:[%i][%i] abaixo da media da linha.\n", i, j);
			}else{
				printf("o indice em questao:[%i][%i] acima da media da linha.\n", i, j);
			}
		}
		printf("\n");
    }
    printf("\n");
}


