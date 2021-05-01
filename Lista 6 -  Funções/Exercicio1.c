#include <stdio.h>
float fatorial (float a);

int main(){
	float a, fat;
	printf("Escreva o fatorial a ser calculado:");
	scanf("%f",&a);	
	fat = fatorial(a);
	printf("%.0f", fat);
	return 0;
}

float fatorial (float a){
	float i;
		for(i = 1; a > 1; a = a - 1){
			i = i * a;
		}
			return i;
	}


