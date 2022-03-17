#include<stdio.h>

main(){
	int num_a=0, num_b=0;
	printf("Primeiro numero: ");
	scanf("%d",&num_a);
	printf("Segundo numero: ");
	scanf("%d",&num_b);
	num_a = num_a + num_b;
	printf("\nSoma: %d\n",num_a);
	return 0;
}
