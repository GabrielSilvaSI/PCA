#include<stdio.h>

int main(void){
	int num=0, sum=0;
	printf("Numero: ");
	scanf("%d",&num);
	while(num!=-1){
		sum += num;
		num--;
	}
	printf("\nTotal: %d\n",sum);
	
	return 0;
}
