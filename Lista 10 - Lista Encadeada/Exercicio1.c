#include <stdio.h>
#include <stdlib.h>

typedef struct numero {
	int posicao;
	char nome[100];
	char rua[100];
	char cidade[100];
	char estado[100];
	unsigned long int cep;
	struct numero * seguinte;
}teste;

int contador = 0;

int menu(void){
	int c = 0;
	do {
		printf("\n-- MENU:\n");
		printf("\t 1. Inserir um nome\n");
		printf("\t 2. Listar o arquivo\n");
		printf("\t 3. Sair\n");
		printf("-- Digite sua escolha: ");
		scanf("%d", &c);
	} while (c <= 0 || c > 3);
	getchar();
	return c;
}

void ler_string(char palavra[100], int tamanho)
{
	int i = 0;
	char c;

	c = getchar();
	while ((c != '\n') && (i < tamanho)) {
		palavra[i++] = c;
		c = getchar();
	}
	palavra[i] = '\0';

	if (c != '\n') {
		c = getchar();
		while ((c != '\n') && (c != EOF)) {
			c = getchar();
		}
	}

}

void insere(teste* seguinte_numero){
	seguinte_numero->seguinte = (teste *)malloc(sizeof(teste));
	seguinte_numero = seguinte_numero->seguinte;

	if (seguinte_numero->seguinte == NULL) {
		printf("\nEstrutura Cheia!!");
		return;
	}
	contador = contador + 1;
	
	seguinte_numero->seguinte = NULL;
	
	seguinte_numero->posicao = contador;
	printf("\t Posicao: %d\n", seguinte_numero->posicao);
	printf("\t Nome: ");
	ler_string(seguinte_numero->nome, 100);
	printf("\t Rua: ");
	ler_string(seguinte_numero->rua, 100);
	printf("\t Cidade: ");
	ler_string(seguinte_numero->cidade, 100);
	printf("\t Estado: ");
	ler_string(seguinte_numero->estado, 100);
	printf("\t CEP: ");
	scanf("%lu", &seguinte_numero->cep);
}

void apaga(teste* seguinte_numero, teste* inicial_numero)
{
	int p;
	teste * temp_ponto;

	printf("Numero do Registro: ");
	scanf("%d", &p);
	
	seguinte_numero = inicial_numero;
	while(seguinte_numero!=NULL){
		if(seguinte_numero->posicao == p-1){
			temp_ponto = seguinte_numero;
			temp_ponto = temp_ponto->seguinte;
			temp_ponto = temp_ponto->seguinte;
			if(temp_ponto!=NULL){
				seguinte_numero->seguinte = temp_ponto;
			}else{
				seguinte_numero->seguinte = NULL;
			}
			
			break; 
		}
	}
}

void imprime(teste* seguinte_numero, teste* inicial_numero){

	
	seguinte_numero = inicial_numero;
	seguinte_numero = seguinte_numero->seguinte;
	
	while(seguinte_numero!=NULL){
		printf("-- Registro %d:\n", seguinte_numero->posicao);
		printf("\t Nome: %s", seguinte_numero->nome);
		printf("\t Rua: %s", seguinte_numero->rua);
		printf("\t Cidade: %s", seguinte_numero->cidade);
		printf("\t Estado: %s\n", seguinte_numero->estado);
		printf("\t CEP: %lu\n", seguinte_numero->cep);
	
		seguinte_numero = seguinte_numero->seguinte;
	}
}

int main(){
	int escolha;

	teste * inicial_numero;
	teste * seguinte_numero;
	
	inicial_numero = (teste *)malloc(sizeof(teste));
	if(inicial_numero == NULL){
		exit(1);
	}
		
	seguinte_numero = inicial_numero;
	
	for (;;) {
		escolha = menu();
		switch (escolha) {
		case 1:
			insere(seguinte_numero);
			break;
		case 2:
			imprime(seguinte_numero, inicial_numero);
			break;
		case 3:
			exit(0);
			break;
		}
	}
	
	free(inicial_numero);
	free(seguinte_numero);
	return 0;
}
