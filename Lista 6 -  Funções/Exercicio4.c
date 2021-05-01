#include <stdio.h>
float tabuada (int a);

int main(){
	int A,i,resultado;
	
	for (i = 0; i <= 10; i++){
		resultado = tabuada(i);
	}
		return 0;

}

float tabuada (int a){
	int resultado , x;
	for(x = 0; x <= 10; x++){
			resultado = a * x;
			printf("%i x %i = %i\n", a,x,resultado);
		}
	}
	


