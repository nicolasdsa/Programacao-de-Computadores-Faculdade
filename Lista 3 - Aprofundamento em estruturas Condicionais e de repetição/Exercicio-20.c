#include <stdio.h>

int main(){
	int A,B = 1,x = 1, C = 1;
	printf("Digite os numeros de termos:");
	scanf("%i", &A);
	
	for (x; x < A; x++){
		B = B + 2;
		C = C + B;
	}
	printf("S = %i", C);
}
