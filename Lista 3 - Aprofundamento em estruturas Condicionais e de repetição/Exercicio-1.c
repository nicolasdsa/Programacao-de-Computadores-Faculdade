#include <stdio.h>

int main(){
	int A;
	printf("Digite um numero:");
	scanf("%i",&A);
	
	if(A < 0){
		printf("%d e negativo",A);
	}
	else {
		printf("%d e positivo",A);
	}
}
