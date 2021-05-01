#include <stdio.h>

int primo (int a);


int main(){
	int b, resultado;
	printf("Escreva o numero:");
	scanf("%i", &b);
	resultado = primo(b);
	return 0;
	
}
int primo (int a){
	
	int i, naoprimo = 0;
	for(i = a ; i > 0; i = i - 1){
		if(a % i == 0){
		naoprimo = naoprimo + 1;
		}
	}
	if(naoprimo > 2){
		return printf("Numero nao Primo");
	}
	else{
		return printf("Numero Primo");
	}
}




