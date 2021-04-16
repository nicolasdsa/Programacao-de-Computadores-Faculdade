#include <stdio.h>

int main(){
		double v1,v2, mt, mediafinal;
		int A;

	do{

	printf("Digite a nota 1:");
	scanf("%lf",&v1 );
	if (v1 < 0){
		break;
	}
	printf("Digite a nota 2:");
	scanf("%lf",&v2 );
	mediafinal = (v1 + v2) /2;
	printf("A media final e: %.2lf\n",mediafinal);
	
	
	
	}while(v1 > 0);
}
