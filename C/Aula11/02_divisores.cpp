/*
2) Crie um programa em C que leia um número inteiro do teclado e
imprima todos os divisores daquele número e a quantidade de divisores que este número tem.
Um número é dito ser divisível por outro número quando o resto da divisão deste número pelo outro é igual a zero.
Ex? 4%2 = 0.
*/

#include<stdio.h>

int main(void){
	int num = 0;
	int qtd = 0;
	int cont = 0;
	
	printf("Numero: ");
	scanf("%d",&num);
	
	printf("Divisores: ");
	for(cont=1;cont<=num;cont++){
		//printf("%d",cont);
		if(num%cont==0){
			printf("%d; ",cont);
			qtd++;
		}
	}
	printf("\nQuantidade de divisores: %d\n",qtd);
	
	return 0;
}
