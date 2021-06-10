#include <stdio.h>

int main(){
	int a,b,i, temp = 0,contador = 0,contador2 = 0;
	int corredor[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0};
	int janela[20] = {1, 0 ,1, 0 ,0 ,0 ,1, 1 ,0 ,1 ,1, 0 ,0, 1, 0 ,1, 1, 0, 0 ,0};
	
		for (i = 0; i <= 19; i++){
			if (corredor[i] == 1){
				contador = contador + 1;
			}
			if (janela[i] == 1){
				contador2 = contador2 + 1;
			}
		}
	
	printf("Voce deseja sentar na poltrona ao lado da janela ou ao lado do corredor? 1 = janela, 2 = corredor\n");
	scanf("%i", &a);
	

	
	if(a == 1 && contador2 !=20){
		printf("Os lugares disponiveis na janela estao marcados com 0, ocupados com 1 \n");
		for (i = 0; i <= 19; i++){
			printf("Assento %i = %i\n", i + 1,janela[i]);
		}
		printf("Escolha o seu assento:");
		scanf("%i", &b);
		temp = b - 1;
		while (janela[temp] == 1){
			printf("Esse assento ja esta comprado, escolha outro:");
			scanf("%i", &b);
			temp = 0;
			temp = b - 1;
		}
		janela[temp] = 1;
		printf("Compra finalizada. O assento %i e seu.\n", b);
		
		printf("Atualizacao dos lugares:\n");
		for (i = 0; i <= 19; i++){
			printf("Assento %i = %i\n", i + 1,janela[i]);
		}
	}
	
	else if (a == 2 && contador != 20){
		printf("Os lugares disponiveis no corredor estao marcados com 0, ocupados com 1 \n");
		for (i = 0; i <= 19; i++){
			printf("Assento %i = %i\n", i + 1,corredor[i]);
		}
		printf("Escolha o seu assento:");
		scanf("%i", &b);
		temp = b - 1;
		while (corredor[temp] == 1){
			printf("Esse assento ja esta comprado, escolha outro:");
			scanf("%i", &b);
			temp = 0;
			temp = b - 1;
		}
		corredor[temp] = 1;
		printf("Compra finalizada. O assento %i e seu.\n", b);
		
		printf("Atualizacao dos lugares:\n");
		for (i = 0; i <= 19; i++){
			printf("Assento %i = %i\n", i + 1,corredor[i]);
		}
		
	}
	else if (a == 1 && contador2 ==20 &&  contador !=20){
			printf("Todos os lugares na janela estao ocupados, inicie o programa novamente e tente o corredor.");
		}
	else if (a == 2 && contador == 20 &&  contador2 !=20){
			printf("Todos os lugares no corredor estao ocupados, inicie o programa novamente e tente a janela.");
		}
	else if (a == 1 || a == 2 && contador2 ==20 && contador == 20){
			printf("Todos os lugares no onibus estao ocupados, espere o proximo.");
}
	

}
