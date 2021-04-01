#include <stdio.h>

int main(){
	double C = 60, D = 20, reprovadosC, perreprovadostotal,perreprovadosC, perreprovadosD,peraprovadosD, reprovadosD, pervalidos,reprovadostotal;
	printf("Escreva o percentual em decimal de numero de alunos reprovados na turma C, utilize ponto:");
	scanf("%lf",&perreprovadosC );
	printf("Escreva o percentual em decimal de numero de alunos aprovados na turma D, utilize ponto:");
	scanf("%lf",&peraprovadosD);
	reprovadosC = C * perreprovadosC;
	reprovadosD = D - (D * peraprovadosD);
	reprovadostotal = reprovadosC + reprovadosD;
	perreprovadostotal = (reprovadostotal / (C + D)) * 100;
	
	
	printf("O numero de alunos reprovados na turma C:%.2lf, O numero de alunos reprovados na turma D:%.2lf e o percentual de reprovados total: %.2lf%%\n",reprovadosC,reprovadosD,perreprovadostotal);
}
