#include <stdio.h>
#include <stdlib.h>


typedef struct numero{
	int val;
	struct numero * seguinte;	
}teste;

float elimina (int n, teste *seguinte_numero, teste *inicial_numero);


int main()
{
	int b, i, resultado;
	teste * inicial_numero;
	teste * seguinte_numero;
	
	inicial_numero = (teste *)malloc(sizeof(teste));
	if(inicial_numero == NULL){
		exit(1);
	}
		
	seguinte_numero = inicial_numero;
	printf("Digite o numero de valores que serao inseridos: \n");
	scanf("%d", &b);
	
	printf("Digite os valores: \n");
	for(i = 0; i < b;i++){
		scanf("%d", &seguinte_numero->val);
		
		if(i < b-1){
			seguinte_numero->seguinte = (teste *)malloc(sizeof(teste));
			seguinte_numero = seguinte_numero->seguinte;
		}
		
		else{
			seguinte_numero->seguinte = NULL;
		}
	}
	seguinte_numero->seguinte = NULL;
	
	seguinte_numero = inicial_numero;
	printf("%d \n", inicial_numero->val);
	
	resultado = elimina(b, seguinte_numero, inicial_numero);

	free(seguinte_numero);
	free(inicial_numero);
	
	return 0;
}

float elimina (int b,  teste *seguinte_numero, teste *inicial_numero){
	int i,j, n = 0, aprovado;
	float resultado[b];
	seguinte_numero = inicial_numero;
		for (i = 0; i < b; i++) {
    		if (i == 0) {
      			resultado[n] = seguinte_numero->val;
      			seguinte_numero = seguinte_numero->seguinte;
      			n = n + 1;
    		} 
			else {
      			aprovado = 0;
      			for (j = 0; j < n; j++) {
        			if(seguinte_numero->val == resultado[j]) {
          			aprovado = aprovado + 1;
          			seguinte_numero = seguinte_numero->seguinte;
        			}

      			}
      			if (aprovado < 1) {
        		resultado[n] = seguinte_numero->val;
        		n = n + 1;
        		seguinte_numero = seguinte_numero->seguinte;
      			}
    		}
  }
	
	for (i = 0; i < n; i++){
		 	printf("Indice %i: %.2f\n", i,resultado[i]);
	} 
	
		return 0;

}
