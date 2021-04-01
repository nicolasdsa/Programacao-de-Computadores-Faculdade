#include <stdio.h>
int main(){
	double empregados, salario, custo, vendas,salariofinal, finalbicicleta, lucro, comissao;
	printf("O numero de empregados:");
	scanf("%lf",&empregados );
	printf("Valor do salario minimo:");
	scanf("%lf",&salario );
	printf("Custo de cada bicicleta:");
	scanf("%lf",&custo );
	printf("O numero de bicicleta vendidas:");
	scanf("%lf",&vendas );
	finalbicicleta = (custo + (custo * 0.5)) * vendas;
	comissao = (custo + (custo * 0.15)) * vendas;
	salariofinal = (salario * 2) + (comissao / empregados);
	lucro = finalbicicleta - (salariofinal * empregados) - (custo * vendas);
	
	printf("Salario final:%.2lf reais e o lucro da loja:%.2lf reais", salariofinal, lucro );

}
