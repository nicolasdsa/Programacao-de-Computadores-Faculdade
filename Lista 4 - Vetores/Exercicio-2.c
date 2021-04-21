#include <stdio.h>

int main(){
	int A[9],B, i = 1;
	
	for (i; i <= 10; i++){
		B = 5 * i;
		A[i] = B;
		printf("%i\n",A[i]);
	}
	
}
