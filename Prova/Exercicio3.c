#include <stdio.h>

int main(){
	int i, j;
	float m[5][5],maior,novovalor[5][5];
	
	for( i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5; j++){
			printf("Valor correspondente ao indice[%i][%i]: ", i, j);
			scanf("%f", &m[i][j]);
			
			if (i == 0 && j == 0){
                maior = m[0][0];
           }
           
           if(m[i][j]>maior){
            	maior=m[i][j];
           }
		}
}	
	printf("Matriz inicial:\n");
	for( i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5; j++){
			printf("Indice[%i][%i]: %.2f\n ", i + 1, j + 1, m[i][j]);
	}
}
	printf("Nova Matriz:\n");
	for( i = 0 ; i < 5 ; i++){
		for(j = 0 ; j < 5; j++){
			novovalor[i][j] = m[i][j] + maior; 
			printf("indice:[%i][%i]: %.2f\n", i + 1, j + 1, novovalor[i][j]);
			
	}
}
    printf("O maior numero foi: [%.0f]\n",maior);
    return 0;
}
