#include <stdio.h>

int main() {
	int a= 10,b=20,*tempA,*tempB,aux;
	tempA = &a;
	tempB = &b;
	aux = a;
	*tempA = *tempB;
	*tempB = aux;
	printf("a=%d b=%d",a,b);
	/*Na linha 3, estava void ao em vez int, na linha 8 faltava um asterisco antes do tempB */
}
