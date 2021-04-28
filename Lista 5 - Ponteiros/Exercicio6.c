
int main() {
	int valor;
	int *p1;
	float temp;
	float *p2;
	char aux;
	char *nome = "Algoritmos";
	char *p3;
	valor = 10;
	p1 = &valor;
	*p1 = 20;
	//Escreve 20 por nova atribuição.
	printf("(a) %d \n", valor);
	temp = 26.5;
	p2 = &temp;
	*p2 = 29.0;
	//Escreve 29 por nova atribuição.
	printf("(b) %.1f \n", temp);
	p3 = &nome[0];
	aux = *p3;
	//Escreve a primeira letra do vetor nome por conta de aux ser atribuido ao p3 que é igual a &nome[0] 
	printf("(c) %c \n", aux);
	p3 = &nome[4];
	aux = *p3;
	//Escreve quinta letra do vetor nome por conta de aux ser atribuido ao p3 que é igual a &nome[4]
	printf("(d) %c \n", aux);
	p3 = nome;
	//Escreve a primeira letra do vetor nome.
	printf("(e) %c \n", *p3);
	p3 = p3 + 4;
	//Escreve quinta letra pois é o valor anterior de p3 = 0 somado ao valor atual p3 = p3 + 4.
	printf("(f) %c \n", *p3);
	p3--;
	//Escreve quarta letras pois é o valor da anterior p3 = 4 menos ao valor atual p3--
	printf("(g) %c \n", *p3);
}
