/*
Alguns números de três dígitos tem a seguinte característica:
 a soma do cubo de cada dígito é igual ao próprio número de três dígitos.
Ex: 153. 1³ + 5 ³ + 3³ = 153.
Faça um programa em C que escreva todos os números com esta característica entre 501 e 1000.
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
		
		//verificando característica
		if((unidade*unidade*unidade+dezena*dezena*dezena+centena*centena*centena)==ind)
			printf("%d%c+%d%c+%d%c = %d\n",centena,252,dezena,252,unidade,252,ind);
	}
	
	return 0;
}
