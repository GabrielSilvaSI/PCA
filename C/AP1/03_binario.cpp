/*
Por exemplo, dado N = 1041, a função deve retornar 5, porque N tem representação binária 10000010001 e,
portanto, seu maior "intervalo de 0s" tem comprimento 5. Dado N = 32, a função deve retornar 0,
porque N tem representação binária '100000' e, portanto, sem "lacunas de 0s".
*/
#include<stdio.h>

int main(void){
	int casa[32];
	int dec=0,desloc=0,cont=0, maior=0, acumulador=0, aux=0;
	//preenchendo vetor com 0s para envitar erros
	for(int i=0;i<32;i++){
 		casa[i]=0;
	}
	
	//convertendo decimal para binário (ps: vetor invertido)
	printf("Decimal: ");
	scanf("%d", &dec);
 	for(cont = 31; cont >= 0; cont--) {
	    desloc = dec >> cont;
	    if(desloc & 1) {
	    	casa[cont] = 1;
	    } else {
	    	casa[cont] = 0;
	    }
 	}
 	
 	//verificando lacunas de 0s
 	for(int i=0;i<32;i++){
 		if(casa[i]==1){
 			acumulador=0; //reinicia o acumulador (ps:acumula os 0s entre intervalos de 1)
 			for(int aux=i+1;aux<=31-i;aux++){ //percorre o vetor a partir do primeiro 1 encontrado
 				if(casa[aux]==0){
 					acumulador++;  //acumula os 0s
				}else{ //fecha contagem ao encontrar um 1
					if(acumulador>maior)
						maior = acumulador;
						acumulador=0; //começa uma nova contagem aproveitando o for
				}
			}
 		}
	}
	printf("Intervalo de 0s mais longo: %d\n",maior);
 	
	
	return 0;
}
