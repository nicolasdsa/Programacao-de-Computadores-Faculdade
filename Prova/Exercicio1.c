#include <stdio.h>

int main() {
 	int temp,i,negativo;
 	int Ninteiro;
 	float N;
 	printf("Escreva um numero N que seja inteiro e positivo:");
 	scanf("%f", &N);
 	
 	Ninteiro = N;
 	while(N != Ninteiro || N < 0){
 		 	printf("Numero Invalido.Escreva um valor valido:");
 			scanf("%f", &N);
 			Ninteiro = N;
	 }
 	
 	
	for (i = 1; i <= N; i++){
		if (i % 2 != 0){
			negativo = i * -1;
			printf("%i\n", negativo);
		}
	}
}
