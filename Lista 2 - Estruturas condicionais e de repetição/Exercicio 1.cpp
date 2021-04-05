#include <stdio.h>

int main(){
	double v1,v2, mt, mediafinal;
	printf("Digite a nota 1:");
	scanf("%lf",&v1 );
	printf("Digite a nota 2:");
	scanf("%lf",&v2 );
	printf("Digite a media dos trabalhos:");
	scanf("%lf", &mt);
	mediafinal = ((v1 * 3) + (v2 * 3) + (4 * mt)) / 10;
	printf("A media final é: %.2lf\n",mediafinal);
}
