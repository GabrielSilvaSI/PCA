/*
2) Crie um programa em C que leia um n�mero inteiro do teclado e
imprima todos os divisores daquele n�mero e a quantidade de divisores que este n�mero tem.
Um n�mero � dito ser divis�vel por outro n�mero quando o resto da divis�o deste n�mero pelo outro � igual a zero.
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
