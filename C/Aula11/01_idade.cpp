/*
1) Crie um programa em C que leia a idade de um usuário.
Ao final, imprima a seguinte mensagem: "Olá, sua idade daqui com 100 anos será de X anos. "
X é a soma de 100 com a idade lida do teclado.
*/

#include<stdio.h>

int main(void){
	int age = 0;
	printf("Idade: ");
	scanf("%d",&age);
	printf("Ola, sua idade daqui a 100 anos sera de %d anos.\n",age+100);
	
	return 0;
}
