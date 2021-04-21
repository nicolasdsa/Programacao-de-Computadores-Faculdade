#include <stdio.h>

int main(){
	int i = 0, contador = 0;
	double A[10],U[10];
	
	
	for (i; i <= 9; i++){
		printf("Escreva o indice %i:", i);
		scanf("%lf", &A[i]);
		contador = 9 - i;
		U[contador] = A[i];
	}
	for (i = 0; i <= 9; i++){
			printf("%.0lf\n", U[i]);
		}

	
		
}
