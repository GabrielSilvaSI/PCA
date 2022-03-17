#include<stdio.h>

main(){
	float peso=0, altura=0;
	printf("Peso: ");
	scanf("%f",&peso);
	printf("Altura: ");
	scanf("%f",&altura);
	float imc = peso / (altura*altura);
	printf("IMC: %.1f\n",imc);
	return 0;
}
