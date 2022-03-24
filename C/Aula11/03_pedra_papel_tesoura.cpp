/*
3) Crie um programa em C para representar o jogo "Pedra, Papel e tesoura".
*/

#include<stdio.h>

int main(void){
	int esc = 0;
	int player_1 = 0;
	int player_2 = 0;
	while(esc!=-1){
		printf("	\n-Player 1-\n1 - Pedra\n2 - Papel\n3 - Tesoura\n\n-1 - Sair\nescolha: ");
		scanf("%d",&esc);
		if(esc!=-1){
			player_1 = esc;
			printf("	\n-Player 2-\n1 - Pedra\n2 - Papel\n3 - Tesoura\n\nescolha:");
			scanf("%d",&esc);
			player_2 = esc;
			printf("\n");
			switch(player_1){
				case 1:
					if(player_2==2){
						printf("Usuario 1 escolheu pedra e usuario 2 escolheu papel, Parabens usuario 2, voce venceu.");
					}else{
						if(player_2==3){
							printf("Usuario 1 escolheu pedra e usuario 2 escolheu tesoura, Parabens usuario 1, voce venceu.");
						}else{
							printf("Usuario 1 escolheu pedra e usuario 2 escolheu pedra, empate.");
						}
					}
					break;
				case 2:
					if(player_2==1){
						printf("Usuario 1 escolheu papel e usuario 2 escolheu pedra, Parabens usuario 1, voce venceu.");
					}else{
						if(player_2==3){
							printf("Usuario 1 escolheu papel e usuario 2 escolheu tesoura, Parabens usuario 2, voce venceu.");
						}else{
							printf("Usuario 1 escolheu papel e usuario 2 escolheu papel, empate.");
						}
					}
					break;
				case 3:
					if(player_2==1){
						printf("Usuario 1 escolheu tesoura e usuario 2 escolheu pedra, Parabens usuario 2, voce venceu.");
					}else{
						if(player_2==2){
							printf("Usuario 1 escolheu tesoura e usuario 2 escolheu papel, Parabens usuario 1, voce venceu.");
						}else{
							printf("Usuario 1 escolheu tesoura e usuario 2 escolheu tesoura, empate.");
						}
					}
					break;
				default:
					printf("ERRO");
			}
			printf("\n");
		}
	}
	printf("\nVoce escolheu sair\n");
	
	return 0;
}
