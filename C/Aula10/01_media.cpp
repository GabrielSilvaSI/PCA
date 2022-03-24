#include<stdio.h>

int main(void){
	int num=0, sum=0, cont=0;
	while(num!=-1){
		printf("Digite um número (-1 p/sair): ");
		scanf("%d",&num);
		if(num!=-1){
			sum += num;
			cont++;
		}
	}
	printf("\nMedia: %d\n",sum/cont);
	
	return 0;
}
