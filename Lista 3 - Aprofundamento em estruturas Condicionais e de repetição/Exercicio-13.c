#include <stdio.h>

int main(){
	int A, senha = 2021;
	printf("Digite a senha:");
	scanf("%d", &A);
	
	while(A != senha){
	
	printf("SENHA INVALIDA\n");
	printf("Digite a senha:");
	scanf("%d", &A);
}

	printf("ACESSO PERMITIDO");


}
