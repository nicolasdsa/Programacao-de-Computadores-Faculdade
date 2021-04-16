#include <stdio.h>	
int main(){
	double A,B;
	printf("Digite o primeiro numero:");
	scanf("%lf", &A);
	printf("Digite o segundo numero:");
	scanf("%lf", &B);
	while (A != B){
		
	
	if (A > B){
		printf("Ordem decrescente\n");
	}
	else{
		printf("Ordem crescente\n");
	}
	
	printf("Digite o primeiro numero:");
	scanf("%lf", &A);
	printf("Digite o segundo numero:");
	scanf("%lf", &B);
}

}
	
