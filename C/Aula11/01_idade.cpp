/*
1) Crie um programa em C que leia a idade de um usu�rio.
Ao final, imprima a seguinte mensagem: "Ol�, sua idade daqui com 100 anos ser� de X anos. "
X � a soma de 100 com a idade lida do teclado.
*/

#include<stdio.h>

int main(void){
	int age = 0;
	printf("Idade: ");
	scanf("%d",&age);
	printf("Ola, sua idade daqui a 100 anos sera de %d anos.\n",age+100);
	
	return 0;
}
