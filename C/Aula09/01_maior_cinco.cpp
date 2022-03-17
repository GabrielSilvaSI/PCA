#include<stdio.h>
#include<windows.h>

int main(void){
	float num[4];
	float biggest = 0;
	int i = 0;
	printf("1%c numero: ",167);
	scanf("%f",&biggest);
	for(i=1;i<5;i++){
		printf("%d%c numero: ",i+1,167);
		scanf("%f",&num[i]);
		if(num[i]>biggest)
			biggest = num[i];
	}
	printf("O maior numero: %f\n\n",biggest);
	system("pause");
	return 0;
}
