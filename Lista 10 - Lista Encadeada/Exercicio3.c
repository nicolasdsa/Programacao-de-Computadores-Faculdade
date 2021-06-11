#include <stdio.h>
#include <stdlib.h>


typedef struct elemento Elemento;
struct elemento {
	int valor;
	Elemento *proximo;
	Elemento *anterior;
};
//Duas variaveis globais criadas.
Elemento *inicio;
Elemento *fim;
int tamanho;

// Todas as funções que serão utilizados sendo criadas
void criaLista();
Elemento *aloca(int valor);
void insereInicio(int valor);
void insereFim(int valor);
void inserePosicao(int valor, int posicao);
void removeInicio();
void removeFim();
void imprimeLista();
void imprimeListaContrario();

//Criação de dois elementos nulos para a lista
void criaLista() {
	inicio = NULL;
	fim = NULL;
	tamanho = 0;
}
//Alocação de dado e o funcionamento da lista duplamente encadeada
Elemento *aloca(int valor) {
	Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
	novo->valor = valor;
	novo->anterior = NULL;
	novo->proximo = NULL;
	return novo;
}

void removeInicio() {
	Elemento *atual = inicio;
	inicio = atual->proximo;
	inicio->anterior = NULL;
	tamanho--;
}
void removeFim() {
	Elemento *atual = fim;
	fim = atual->anterior;
	fim->proximo = NULL;
	tamanho--;
}

//Inserir no inicio da lista:
void insereInicio(int valor) {
	Elemento *novo = aloca(valor);   //Cria um novo elemento
	//verificar se o inicio for nulo, se sim, inicio recebe novo e o fim vai ser novo também, pois se os dois são nulos o inico e fim recebe o novo.
	if(inicio==NULL){
		inicio=novo;
		fim=novo;

	//Se a lista já tiver dado se cria outro elemento e aponta o ant para o dado 2 e prox do dado 2 para o 1.
	}else{
		Elemento *atual; //criar novo elemento caso tenha dado no inicio da lista.
		atual = inicio;
		novo->proximo = atual;
		atual->anterior = novo;
		inicio = novo;
	}
	tamanho++;
}

//Insere no fim da lista:
void insereFim(int valor) {
	Elemento *novo = aloca(valor);   //Cria um novo elemento
	//verificar se o inicio for nulo, se sim, inicio recebe novo e o fim vai ser novo também, pois se os dois são nulos o inico e fim recebe o novo.
	if(inicio==NULL){
		inicio=novo;
		fim=novo;
	//Se a lista já tiver dado se cria outro elemento e aponta o ant para o dado 2 e prox do dado 2 para o 1.
	}else{
		Elemento *atual; //criar novo elemento caso tenha dado no inicio da lista.
		atual = fim;
		novo->anterior = atual;
		atual->proximo = novo;
		fim = novo;
	}
	tamanho++;
}

//Inserir no inicio da lista:
void inserePosicao(int valor, int posicao) {
	posicao = posicao-1;
	Elemento *novo = aloca(valor);   //criar novo elemento
	//verificar se o inicio for nulo, se sim, inicio recebe novo e o fim vai ser novo também, pois se os dois são nulos o inico e fim recebe o novo.
	if(inicio==NULL){
		inicio=novo;
		fim=novo;
	//Se a lista já tiver dado se cria outro elemento e aponta o ant para o dado 2 e prox do dado 2 para o 1.
	}else{
		Elemento *atual; //Criar novo elemento caso tenha dado no inicio da lista.
		Elemento *tmp;
		int i;

		// Decide o ponto do inicio
		if (posicao < (tamanho/2)) {
			atual = inicio;
			i = 0;
		} else {
			atual = fim;
			i = tamanho;
		}

		// Encontra a posição
		while ((i != posicao) && (i >= 0) && (i <= tamanho)) {
			if (i < posicao) {
				i++;
				atual = atual->proximo;
			} else if (i > posicao) {
				i--;
				atual = atual->anterior;
			}

			if (posicao == i) {
				// novo->anterior = 
				// novo->proximo =
				// atual = novo;
				printf("Valor antecessor ao quero inserir %d\n", atual->anterior->valor);
				printf("Valor proximo ao quero inserir %d\n", atual->proximo->valor);
			}
		}



	}
	// tamanho++;
}

//Essa função imprime a lista original:
void imprimeLista() {
	Elemento *atual;
	atual = inicio;
	while(atual){
		printf("%d\n",atual->valor);
		atual=atual->proximo;
	}
}

//Essa função imprimi a lista ao contrario:
void imprimeListaContrario() {
	Elemento *atual;
	atual = fim;
	while(atual){
		printf("%d\n",atual->valor);
		atual=atual->anterior;
	}
}

int main() {
	criaLista();
	int i;
	for(i=0 ;i<5 ; i++){
		insereInicio(i);
	}
	inserePosicao(10, 2);
	imprimeLista();
	printf("--------------\n");
	imprimeListaContrario();
}

