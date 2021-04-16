#include <stdio.h>

int main(){
	int A;
	do{
	printf("Digite um numero:");
	scanf("%i",&A);
	
	if(A < 0){
		printf("%d e negativo\n",A);
	}
	else if (A > 0) {
		printf("%d e positivo\n",A);
	}
	
	}while(A != 0);
}
