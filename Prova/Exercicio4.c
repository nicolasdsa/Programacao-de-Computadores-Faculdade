#include <stdio.h>
#include <string.h>

int main(){
	int  i, contador;
	
	char senha[30], temp;
	
	printf("Escreva a senha:");
	fgets(senha, 30, stdin);
	
	contador = strlen(senha)-2;
		
	for(i = 0 ; i < (strlen(senha) - 1) / 2;i++){
		temp = senha[i];
		senha[i] = senha[contador];
		senha[contador] = temp;
		contador = contador - 1;
	}
	
	senha[0] = 'a';
	senha[strlen(senha) - 2] = 's';
	printf("Senha criptografada (Invertida e trocada a primeira e ultima letra.):");
	for(i = 0;i<(strlen(senha));i++){
		   printf("%c", senha[i]);	
	}
		
	return 0;
}
