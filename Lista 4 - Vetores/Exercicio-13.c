#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0;
	char teste[30];
	printf("Existe um limite de 10 palavras a serem testadas");
	for(i = 0 ; i < 10 ;i = i + 1){
		
		printf("\nPalavra a ser testada:");
    	fgets(teste, 30, stdin);
    	printf("primeira letra da palavra: %c\nultima letra da palavra: %c\n\n",teste[0], teste[strlen(teste)-2]);
    	
	}
		
	return 0;
}
