/*
Fa�a um programa em C que calcule e imprima o en�simo termo de uma progress�o aritm�tica. Considere a seguinte f�rmula:
an = a1 + (n � 1)r
a1, n e r s�o valores lidos do teclado. Ao final, o programa deve imprimir se o termo gerado � um n�mero primo ou n�o.
*/
#include<stdio.h>

int main(void){
	int a1 = 0, n = 0, r = 0, an = 0, aux = 0, cond = 1;
	//leitura
	printf("a1: ");
	scanf("%d",&a1);
	printf("n: ");
	scanf("%d",&n);
	printf("r: ");
	scanf("%d",&r);
	
	//calculando termo
	an = a1+(n-1)*r;
	printf("termo = %d\n",an);
	
	//checando numero primo
	for (aux = 2; aux <= an/2; aux++){
		if ((an%aux) == 0)
			cond = 0;
	}
	if(cond)
		printf("Numero primo\n");
	else
		printf("Nao primo\n ");
	
	return 0;
}
