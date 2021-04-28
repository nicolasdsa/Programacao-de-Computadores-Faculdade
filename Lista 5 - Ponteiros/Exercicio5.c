#include <stdio.h>

int main() {
	float vet[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	float *f;
	int i;
	f = vet;
	printf("contador/valor/valor/endereco/endereco");
	for (i = 0; i <= 4; i++) {
	//Escreve o valor do contador i
	printf("\ni = %d", i);
	//Escreve o valor do contador i e o valor relacionado a posição do contador i no vetor vet.
	printf(" vet[%d] = %.1f", i, vet[i]);
	//Escreve o valor do contador i e depois escreve o valor armazenado no endereço correspondente ao escrito, atraves do ponteiro.
	printf(" *(f + %d) = %.1f", i, *(f + i));
	//Escreve o contador i e o endereço de memoria relacionado a posição do vetor escrito.
	printf(" &vet[%d] = %p", i, &vet[i]);
	//Escreve o contador i e o endereço de memoria que se encontram na posição de f escrita.
	printf(" (f + %d) = %p", i, f + i);
	}
	return 0;
}
