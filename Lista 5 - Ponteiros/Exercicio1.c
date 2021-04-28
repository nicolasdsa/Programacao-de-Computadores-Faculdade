#include <stdio.h>

int main(){
	
	int antesint = 154, *depoisint;
	
	float antesfloat = 50.256, *depoisfloat;
	
	char anteschar = 'a', *depoischar;
	
	depoisint = &antesint;
	
	depoisfloat = &antesfloat;
	
	depoischar = &anteschar;
	
	printf("primeiro: %i %.3f %c\n", antesint, antesfloat, anteschar);
		
	*depoisint = 451;
	*depoisfloat = 25.650;
	*depoischar = 'd';
	
	printf("segundo: %i %.3f %c", antesint, antesfloat, anteschar);
	
}
