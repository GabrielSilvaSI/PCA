#include<stdio.h>

int main(void){
	int a=0, b=1, aux, i=1, n=20;
    a = 0;
    b = 1;
    printf("1\n");
	while(i<n){
        aux = a + b;
        a = b;
        b = aux;
        printf("%d\n", aux);
        i++;
    }
	return 0;
}
