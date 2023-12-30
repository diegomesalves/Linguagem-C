#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	int senha;
	
	system("color fc");
	
	printf("\n\n\n\n         DGA SISTEMAS       \n\n\n\n");
	
	printf("Por favor digite sua senha: ");
	scanf("%d", &senha);
	
	if(senha == 254025){
		printf("Seja bem vindo \n");
	}
	
	if(senha != 254025){
		printf("Senha incorreta, tente novamente mais tarde!\n");
		system("exit");
	}
	system("cls");
	
	system("color 6d");
	
	int decisoes;
	
	printf("                       \n\n             DGA STUDIO \n\n ");
	printf("            \n\n\n\n\n Selecione abaixo uma das opçoes desejadas.\n");
	printf("Digite 1 para festas\n");
	printf("Digite 2 para agendamentos\n");
	printf("Digite 3 para contato\n");
	printf("Digite 4 para reclamaçoes\n");
	printf("Digite 5 para suporte\n");
	printf("Digite 6 para negociar\n");
	printf("Digite 7 para voltar ao menu anterior\n");
	
	
	scanf("%d", &decisoes);
	
	system("cls");
	
	
	switch(decisoes){
		case 1: printf("As festas comecam segunda - feria\n ");
		break;
		
		case 2: int evento; 
		        printf("Digite um dia que deseja agendar um envento: ");
		        scanf("%d", &evento);
		        printf("Voce escolheu o dia %d OBRIGADO POR ESCOLHER NOSSOS SERVICOS", evento);
		        break;
		
		case 3:printf("Nosso contato celular: (12)345678900");
		       printf("Nosso email: meuemail@email.com.br");
			   printf("Nosso insta: @meuinstainsta");
			   break;
			   
		case 4: char reclamacao[200];
			   printf("Digite aqui sua reclamaçao: ");
			   scanf("%s", &reclamacao);
			   printf("Obrigado vamos analizar sua reclamacao.\n");
			   break;
			   
		case 5: printf("Ligue para o suporte no numero XX-X XXXX - XXXX.\n");
		break;
		
		case 6: printf(" aguarde, vamos direcionar voce para a central...\n");
		        break;
				
		case 7: printf("saindo\n");
				system("exit");	   
		 } 
		 
	
	
	system("pause");
	return 0;
	
	
	}

	
	
	


