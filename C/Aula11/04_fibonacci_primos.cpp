/*
4) Faça um programa em C que leia um número n do teclado.
Depois, o script deve gerar os n primeiros termos da série de fibonacci e imprimir a sequência na tela.
Ao final, o programa deve imprimir os números primos encontrados na série de fibonacci gerada.
*/

#include<stdio.h>

int main(void){
	int a=0, b=1, aux, cont=0, i=1, n=0, cond = 1;
	char primos[500] = "Primos na sequencia: ";
    a = 0;
    b = 1;
    printf("Numero: ");
    scanf("%d",&n);
    printf("Sequencia fibonacci: 1 ");
	while(i<n){
        aux = a + b;
        a = b;
        b = aux;
        printf("%d ", aux);
        i++;
    }
    a=0;
	b=1;
	i=0;
	cond = 1;
    printf("\nPrimos encontrados: ");
    while(i<n){
        aux = a + b;
        a = b;
        b = aux;
        i++;
        for (cont = 2; cont <= aux/2; cont++){
			if ((aux % cont) == 0)
				cond = 0;
		}
		if(cond){
			if(aux!=1)
				printf("%d ",aux);
		}
		cond = 1;
    }
    
	return 0;
}
