#include<stdio.h>

int main(void){
	float num_a=0, num_b=0;
	printf("Primeiro numero: ");
	scanf("%f",&num_a);
	printf("Segundo numero: ");
	scanf("%f",&num_b);
	if(num_a<num_b){
		printf("\nMenor numero: %.2f\n",num_a);
	}else{
		printf("\nMenor numero: %.2f\n",num_b);
	}
	return 0;	
}
