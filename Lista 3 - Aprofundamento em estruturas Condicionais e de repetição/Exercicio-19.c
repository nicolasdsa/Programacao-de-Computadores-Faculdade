
#include <stdio.h>

int main(){
	int resultado,i,x;
	for(x = 1; x <= 10; x++){
		for (i = 1; i <= 10; i++){
			resultado = i * x;
			printf("%i x %i = %i\n", x,i,resultado);
		}
	}
}
