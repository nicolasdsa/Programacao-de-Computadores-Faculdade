#include <stdio.h>

int main(){
	int A[9],i = 0;
	
	for (i; i <= 9; i++){
		if(i % 2 == 0){
			A[i] = 30;
		}
		else {
			A[i] = 15;
		}
		printf("%i\n",A[i]);
	}
}
