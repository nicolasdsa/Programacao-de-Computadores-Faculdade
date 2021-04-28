#include <stdio.h>

int main(){
	
	int matriz[3][3] = {3, 6, 9, 12, 15, 18, 21, 24, 27},*t, L, C;
	
	for(L = 0 ; L < 3 ; L = L + 1){
		
		for( C = 0; C < 3; C = C + 1){
			
			t = &matriz[L][C];
			
			printf("Posicao:%i\nValor da memoria:%p\n", matriz[L][C], t);
			
		}
	}
	
}
