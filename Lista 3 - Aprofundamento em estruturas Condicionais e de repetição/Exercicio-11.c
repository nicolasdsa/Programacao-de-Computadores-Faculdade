#include <stdio.h>

int main(){
	int A;
	printf("Digite um numero:");
	scanf("%i",&A);
	
	while(A >= 0){
		
	if (A % 2 == 0){
		printf("Par\n");
	}
	else{
		printf("Impar\n");
	}
	
	printf("Digite um numero:");
	scanf("%i",&A);
	
	}
	
}
