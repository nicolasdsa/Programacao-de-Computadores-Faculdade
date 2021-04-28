#include <stdio.h>

int main() {
	int x, *p;
	x = 100;
	p = &x;
	printf("Valor de p:%d.\n", *p);
	return 0;
	/*na linha 7, na lista não tinha o & antes do x.*/
}
