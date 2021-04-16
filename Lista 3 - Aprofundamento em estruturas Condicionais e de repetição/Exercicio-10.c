#include <stdio.h>

int main(){
	int A;
	printf("Digite um numero:");
	scanf("%i",&A);
	
	while(A != 0){
		
	if(A < 0){
		printf("%i e negativo\n",A);
	}
	else if (A > 0) {
		printf("%i e positivo\n",A);
	}
	
	printf("Digite um numero:");
	scanf("%i",&A);
	
	}
	
}
