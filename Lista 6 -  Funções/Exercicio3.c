#include <stdio.h>

float elimina (int b, float *vetor);


int main(){
	int i,b = 0, resultado;
	printf("Escreva o tamanho que o vetor vai ter:");
	scanf("%i", &b);
	
	float vetor[b];
	
	for (i = 0; i < b; i++){
		 	printf("Escreva o numero que vai no indice %i:", i);
		 	scanf("%f", &vetor[i]);
	}
	
	resultado = elimina(b,vetor);
	return 0;
	
}
float elimina (int b, float *vetor){
	int i,j, n = 0, aprovado;
	float resultado[b];
		for (i = 0; i < b; i++) {
    		if (i == 0) {
      			resultado[n] = vetor[i];
      			n = n + 1;
    		} 
			else {
      			aprovado = 0;
      			
      for (j = 0; j < n; j++) {
        if(vetor[i] == resultado[j]) {
          aprovado = aprovado + 1;
        }
      }
      if (aprovado < 1) {
        resultado[n] = vetor[i];
        n = n + 1;
      }
    }
  }
	
	for (i = 0; i < n; i++){
		 	printf("indice %i: %.2f\n", i,resultado[i]);
	} 
}


