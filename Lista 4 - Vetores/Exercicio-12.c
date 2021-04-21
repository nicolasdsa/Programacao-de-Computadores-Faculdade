#include <stdio.h>
#include <string.h>

int main ()
{
	int i = 0;
	char teste[70], teste2;
	
	printf("Palavra a ser testada:");
    fgets(teste, 70, stdin);
    
    printf("Qual letra voce quer remover?");
    scanf("%c", &teste2);
    
    for (i = 0; i < strlen(teste); i++) {
    	
    	if(teste[i]!=teste2){
			printf("%c", teste[i]);
		}
		
	}
		
}
