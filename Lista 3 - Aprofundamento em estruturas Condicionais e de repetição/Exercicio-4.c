#include <stdio.h>

int main(){
	int A, senha = 1234;
	printf("Digite a senha:");
	scanf("%d", &A);
	
	if (A == senha){
		printf("ACESSO PERMITIDO");
	}
	else{
		printf("ACESSO NEGADO");
	}

}
