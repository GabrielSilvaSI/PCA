#include<stdio.h>

int main(void){
	int num = 0;
	scanf("%i",&num);
	if(num>0){
		printf("Positivo\n");
	}else{
		if(num<0){
			printf("Negativo\n");
		}else{
			printf("Zero");
		}
	}
	return 0;
}
