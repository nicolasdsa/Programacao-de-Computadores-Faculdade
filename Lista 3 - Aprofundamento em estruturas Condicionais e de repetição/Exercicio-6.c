#include <stdio.h>

int main(){
	int A;
	printf("Digite um numero:");
	scanf("%d", &A);
	
	switch (A){
		case 3:
			printf("Triangulo");
			break;
		case 4:
			printf("Quadrado");
			break;

		case 5:
			printf("Pentagono");
			break;

		 default:
			printf("Valor invalido");
			break;

	}

}
