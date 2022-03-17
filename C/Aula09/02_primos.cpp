#include<stdio.h>

int main(void){
	int cont = 0, aux = 0, cond = 1;
	
	for(cont = 1; cont<=150; cont++){
		for (aux = 2; aux <= cont/2; aux++){
			if ((cont % aux) == 0)
				cond = 0;
		}
		if(cond){
			printf("%d\n",cont);
		}
		cond = 1;
	}
	
	return 0;
}
