#include <stdio.h>

int main(){
	int A;
	printf("Digite um numero:");
	scanf("%d", &A);
	
	if (A % 2 == 0){
		printf("Par");
	}
	else{
		printf("Impar");
	}

}
