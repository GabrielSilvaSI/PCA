/*
Alguns n�meros de tr�s d�gitos tem a seguinte caracter�stica:
 a soma do cubo de cada d�gito � igual ao pr�prio n�mero de tr�s d�gitos.
Ex: 153. 1� + 5 � + 3� = 153.
Fa�a um programa em C que escreva todos os n�meros com esta caracter�stica entre 501 e 1000.
*/
#include<stdio.h>


int main(void){
	int unidade=0, dezena=0, centena=0;
	
	//checagem entre 501 e 1000
	for(int ind=502; ind<1000 ; ind++){
		//separando casas
		centena = (ind / 100) % 10;
		dezena = (ind / 10) % 10;
		unidade = ind % 10;
		
		//verificando caracter�stica
		if((unidade*unidade*unidade+dezena*dezena*dezena+centena*centena*centena)==ind)
			printf("%d%c+%d%c+%d%c = %d\n",centena,252,dezena,252,unidade,252,ind);
	}
	
	return 0;
}
