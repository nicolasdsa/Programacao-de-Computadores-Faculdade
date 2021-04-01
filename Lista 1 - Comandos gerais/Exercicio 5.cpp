#include <stdio.h>

int main(){
	double total, brancos, nulos, validos,perbrancos,pernulos, pervalidos;
	printf("Escreva o total de numero de eleitores:");
	scanf("%lf",&total );
	printf("O numero de eleitores que votaram branco:");
	scanf("%lf",&brancos );
	printf("O numero de eleitores que votaram nulo:");
	scanf("%lf",&nulos );
	printf("O numero de eleitores que votaram votos validos:");
	scanf("%lf",&validos );
	
	perbrancos = (brancos / total) * 100;
	pernulos = (nulos / total) * 100;
	pervalidos = (validos / total) * 100;
	
	printf("O percentual da eleição se dividiu em: Brancos: %.2lf%%\nNulos:%.2lf%%\nVotos validos:%.2lf%%\n", perbrancos, pernulos, pervalidos);
}
